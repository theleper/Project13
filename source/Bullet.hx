package;

import flixel.FlxSprite;
import flixel.math.FlxPoint;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;
import flixel.FlxObject;
/**
 * ...
 * @author Yoav Levin
 */
class Bullet extends FlxSprite 
{
	private var speed:Float;
	public function new() 
	{
		super();
		
		makeGraphic(6, 6, FlxColor.WHITE, true);
		speed = 560;
		
	}
	
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
	
		public function Shoot(Location:FlxPoint,Aim:Int):Void
	{
		switch(Aim)
		{
			case FlxObject.LEFT:
				velocity.x = -speed;
			case FlxObject.RIGHT:
				velocity.x = speed;
		}
	}
}