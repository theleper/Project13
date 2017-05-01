package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.addons.plugin.control.FlxControl;
import flixel.addons.plugin.control.FlxControlHandler;
class Player extends FlxSprite
{
	var _left:Bool;
	var _right:Bool;
	var _jump:Bool;
	public static inline var speed:Float  = 30;
	public static inline var gravity:Float  = 600;
	public static inline var jumpSpeed = 250;
	
	
	public var climbing:Bool = false;
	private var onLadder:Bool = false;
	

    public function new()
    {
		
        super();
		makeGraphic(16, 16, FlxColor.RED);
		drag.x = drag.y = 1000;
		maxVelocity.x = 150;
		acceleration.y = gravity;
		
		
		
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
		acceleration.x  = 0;
		
		
		//if 
		

		
		Movement();
    }
	
	private function Movement():Void
	{
		_left = FlxG.keys.anyPressed(["LEFT", "A"]);
		_right = FlxG.keys.anyPressed(["RIGHT", "D"]);
		_jump = FlxG.keys.anyPressed(["W", "SPACE", "UP"]);
		
		if (_left && _right)
		{
			_left = _right = false;
		}
		
		if (_right)
		{
			velocity.x += speed;
		}
		
		if (_left)
		{
			velocity.x -= speed;
		}
		
		if (_jump)
		{
			FlxG.watch.addQuick("Jumped", _jump);
		}
		

	}
	
	private function Jump():Void
	{
		FlxG.watch.remove(_jump, "Jumped:");
	}
}

