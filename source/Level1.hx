package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxG;
import flixel.addons.text.FlxTypeText;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.util.FlxColor;
import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.tile.FlxTilemap;
import flixel.FlxObject;
import flixel.FlxCamera.FlxCameraFollowStyle;
class Level1 extends FlxState
{
	var background:FlxSprite;
	public var map:FlxOgmoLoader;
	public var player:Player;
	var ground  = new FlxTilemap();
    override public function create():Void
    {
	
		//create the background
		FlxG.camera.bgColor = FlxColor.PURPLE;
		background = new FlxSprite(0, 0);
		background.loadGraphic(AssetPaths.Level1BG__png);
		add(background);
		
	
		//create welcome text
		
		//load the tilesmap
		LoadMap();
		
		//load entities

		
		//load the player
		 
		player = new Player();
		add(player);
	
		
        //create your state objects here
    }

    override public function update(elapsed:Float):Void
    {
        //call super to update the core state class
        super.update(elapsed);
		FlxG.collide(player, ground);
		
		FlxG.camera.follow(player, FlxCameraFollowStyle.PLATFORMER, 2);
		FlxG.camera.zoom = 1;
		
		
    }
	
	public function LoadMap():Void
	{
		map = new FlxOgmoLoader(AssetPaths.lvl1__oel);
		ground = map.loadTilemap(AssetPaths.tiles__png, 16, 16, "Tiles");
		map.loadEntities(PlaceEntities, "Entities");
		ground.follow();
		add(ground);	
	}
	
	public function PlaceEntities(type:String, data:Xml):Void
	{
		switch(type.toLowerCase())
		{
			case "Player":
				player.x = Std.parseFloat(data.get("x"));
				player.y = Std.parseFloat(data.get("y"));
				
		}
	}
	

}