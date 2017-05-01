package;

import flixel.FlxCamera;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.tile.FlxTilemap;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.addons.display.FlxZoomCamera;

class PlayState extends FlxState
{
	private var _map:FlxOgmoLoader;
	private var _mWalls:FlxTilemap;
	public var _player:Player;
	private var zoomCam:FlxZoomCamera;
	
	override public function create():Void
	{
		
		super.create();
		var cam:FlxCamera;
		var cam:FlxCamera = FlxG.camera;
		zoomCam = new FlxZoomCamera(Std.int(cam.x), Std.int(cam.y), cam.width, cam.height, cam.zoom);
		
		FlxG.cameras.reset(zoomCam);
		
		//load the map
		_map = new FlxOgmoLoader("assets/data/lvl001.oel");
		_mWalls = _map.loadTilemap("assets/images/tiles.png", 16, 16, "walls");
		add(_mWalls);
		
		//load the player
		_player = new Player(20,20);
		_player.makeGraphic(8, 8, FlxColor.RED);
		_player.maxVelocity.set(80, 600);
		_player.acceleration.y = 1000;
		_player.drag.x = _player.maxVelocity.x * 4;
		_player.drag.y = _player.maxVelocity.y / 2;
		add(_player);
		
	}

	override public function update(elapsed:Float):Void
	{
		
		super.update(elapsed);
		
		FlxG.collide(_player, _mWalls);
		Movement();
		
		zoomCam.follow(_player, PLATFORMER, 0.5);
		
		if (FlxG.keys.justPressed.ONE) zoomCam.targetZoom += -0.25; // zoom in
        if (FlxG.keys.justPressed.TWO) zoomCam.targetZoom += 0.25;
		
	}
	
	
	private function Movement():Void
	{
		var _left:Bool;
		var _right:Bool;
		var _jump:Bool;
		
		_left = FlxG.keys.anyPressed([LEFT, A]);
		_right = FlxG.keys.anyPressed([RIGHT, D]);
		_jump = FlxG.keys.anyPressed([SPACE, W]);
		
		if (_left && _right)
		{
			_left = _right = false;
		}
		
		_player.acceleration.x = 0;
		
		if (_left)
		{
			_player.velocity.x = -_player.maxVelocity.x * 4;
		}
		
		else if (_right)
		{
			_player.velocity.x = _player.maxVelocity.x * 4;
		}
		
		if (_jump && _player.isTouching(FlxObject.FLOOR))
		{
			_player.velocity.y = -_player.maxVelocity.y / 2;
		}
		
	
	}
	
	
	
}