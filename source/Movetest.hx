package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxG;
import flixel.util.FlxColor;

class MoveTest extends FlxState
{
	var _player:Player;
	var floor:FlxSprite = new FlxSprite();
    override public function create():Void
    {
        super.create();
		_player = new Player();
		_player.x = _player.y = 0;
		add(_player);
		
		
	 
		floor.makeGraphic(FlxG.width, 50, FlxColor.BLUE);
		floor.x = 0;
		floor.y = FlxG.height - 50;
		floor.immovable = true;
		add(floor);
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
		FlxG.collide(floor, _player);
    }
}