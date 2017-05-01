package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.util.FlxColor;
import flixel.addons.weapon.FlxWeapon.FlxTypedWeapon;
import flixel.addons.weapon.FlxBullet;
import flixel.FlxObject;
class Player extends FlxSprite
{
	var _left:Bool;
	var _right:Bool;
	var _jump:Bool;
	var _shoot:Bool;
	
	
	public static inline var speed:Float  = 30;
	public static inline var gravity:Float  = 800;
	public static inline var jumpSpeed = 250;
	public var climbing:Bool = false;
	private var _aim:Int = FlxObject.RIGHT;
	
	private var onLadder:Bool = false;
	private var _bullets:FlxTypedGroup<Bullet>;

    public function new(Bullets:FlxTypedGroup<Bullet>)
    {
		
        super();
		makeGraphic(16, 16, FlxColor.RED);
		drag.x = drag.y = 1000;
		maxVelocity.x =maxVelocity.y = 150;
		acceleration.y = gravity;
		
		
		//create the weapon
		_bullets = Bullets;
		
		
		
		
		
    }
	
    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
		//acceleration.x  = 0;
		
		Movement();

    }
	
	private function Movement():Void
	{
		_left = FlxG.keys.anyPressed(["LEFT", "A"]);
		_right = FlxG.keys.anyPressed(["RIGHT", "D"]);
		_jump = FlxG.keys.anyPressed(["W", "SPACE", "UP"]);
		_shoot = FlxG.keys.justPressed.CONTROL;
		
		
		
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
			velocity.y -= jumpSpeed;
		}
		
		if (_shoot)
		{
			Shoot();
		}
	}
	
	public function Shoot():Void
	{
		_bullets.recycle(Bullet).Shoot(_aim);
	}
	
}

