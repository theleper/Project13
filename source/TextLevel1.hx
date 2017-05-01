package;

import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.FlxG;

/**
 * ...
 * @author 
 */
class TextLevel1 extends FlxSubState 
{
	var text:FlxText;
	public function new(BGColor:FlxColor=FlxColor.TRANSPARENT) 
	{
		super(BGColor);
		text = new FlxText();
		text.text = "Hello"
		text.size = 10;
		text.x = FlxG.width / 2;
		text.y = 120;
		add(text);
		
	}
	
	override public function update(elapsed:Float):Void
	{
		if (text.x > FlxG.width)
		{
			text.x = -text.width;
		}
	}
	
	
}