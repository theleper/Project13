// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_flixel_addons_plugin_control_FlxControlHandler
#define INCLUDED_flixel_addons_plugin_control_FlxControlHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,addons,plugin,control,FlxControlHandler)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)

namespace flixel{
namespace addons{
namespace plugin{
namespace control{


class HXCPP_CLASS_ATTRIBUTES FlxControlHandler_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxControlHandler_obj OBJ_;
		FlxControlHandler_obj();

	public:
		enum { _hx_ClassId = 0x38e4a024 };

		void __construct( ::flixel::FlxSprite Sprite,int MovementType,int StoppingType,hx::Null< bool >  __o_UpdateFacing,hx::Null< bool >  __o_EnableArrowKeys);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.plugin.control.FlxControlHandler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.addons.plugin.control.FlxControlHandler"); }
		static hx::ObjectPtr< FlxControlHandler_obj > __new( ::flixel::FlxSprite Sprite,int MovementType,int StoppingType,hx::Null< bool >  __o_UpdateFacing,hx::Null< bool >  __o_EnableArrowKeys);
		static hx::ObjectPtr< FlxControlHandler_obj > __alloc(hx::Ctx *_hx_ctx, ::flixel::FlxSprite Sprite,int MovementType,int StoppingType,hx::Null< bool >  __o_UpdateFacing,hx::Null< bool >  __o_EnableArrowKeys);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxControlHandler_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxControlHandler","\xdf","\x7d","\x11","\xd0"); }

		static void __boot();
		static int MOVEMENT_INSTANT;
		static int MOVEMENT_ACCELERATES;
		static int STOPPING_INSTANT;
		static int STOPPING_DECELERATES;
		static int STOPPING_NEVER;
		static int ROTATION_INSTANT;
		static int ROTATION_ACCELERATES;
		static int ROTATION_STOPPING_INSTANT;
		static int ROTATION_STOPPING_DECELERATES;
		static int ROTATION_STOPPING_NEVER;
		static int KEYMODE_PRESSED;
		static int KEYMODE_JUST_DOWN;
		static int KEYMODE_RELEASED;
		static Float DIAGONAL_COMPENSATION_FACTOR;
		bool isPressedUp;
		bool isPressedDown;
		bool isPressedLeft;
		bool isPressedRight;
		bool enabled;
		 ::flixel::FlxSprite _entity;
		 ::openfl::_legacy::geom::Rectangle _bounds;
		bool _up;
		bool _down;
		bool _left;
		bool _right;
		bool _fire;
		bool _altFire;
		bool _jump;
		bool _altJump;
		bool _xFacing;
		bool _yFacing;
		bool _rotateAntiClockwise;
		bool _rotateClockwise;
		int _upMoveSpeed;
		int _downMoveSpeed;
		int _leftMoveSpeed;
		int _rightMoveSpeed;
		int _thrustSpeed;
		int _reverseSpeed;
		bool _thrustEnabled;
		bool _reverseEnabled;
		bool _isRotating;
		Float _antiClockwiseRotationSpeed;
		Float _clockwiseRotationSpeed;
		bool _enforceAngleLimits;
		int _minAngle;
		int _maxAngle;
		bool _capAngularVelocity;
		Float _xSpeedAdjust;
		Float _ySpeedAdjust;
		int _gravityX;
		int _gravityY;
		int _fireRate;
		int _nextFireTime;
		int _lastFiredTime;
		int _fireKeyMode;
		 ::Dynamic _fireCallback;
		Dynamic _fireCallback_dyn() { return _fireCallback;}
		int _jumpHeight;
		int _jumpRate;
		int _jumpKeyMode;
		int _nextJumpTime;
		int _lastJumpTime;
		int _jumpFromFallTime;
		int _extraSurfaceTime;
		int _jumpSurface;
		 ::Dynamic _jumpCallback;
		Dynamic _jumpCallback_dyn() { return _jumpCallback;}
		int _movement;
		int _stopping;
		int _rotation;
		int _rotationStopping;
		bool _capVelocity;
		::Array< ::String > _hotkeys;
		::String _upKey;
		::String _downKey;
		::String _leftKey;
		::String _rightKey;
		::String _fireKey;
		::String _altFireKey;
		::String _jumpKey;
		::String _altJumpKey;
		::String _antiClockwiseKey;
		::String _clockwiseKey;
		::String _thrustKey;
		::String _reverseKey;
		bool invertX;
		bool invertY;
		 ::flixel::_hx_system::FlxSound _jumpSound;
		 ::flixel::_hx_system::FlxSound _fireSound;
		 ::flixel::_hx_system::FlxSound _walkSound;
		 ::flixel::_hx_system::FlxSound _thrustSound;
		void setMovementSpeed(int SpeedX,int SpeedY,int SpeedMaxX,int SpeedMaxY,hx::Null< int >  DecelerationX,hx::Null< int >  DecelerationY);
		::Dynamic setMovementSpeed_dyn();

		void setStandardSpeed(int Speed,hx::Null< bool >  Acceleration);
		::Dynamic setStandardSpeed_dyn();

		void setAdvancedMovementSpeed(int LeftSpeed,int RightSpeed,int UpSpeed,int DownSpeed,int SpeedMaxX,int SpeedMaxY,hx::Null< int >  DecelerationX,hx::Null< int >  DecelerationY);
		::Dynamic setAdvancedMovementSpeed_dyn();

		void setRotationSpeed(Float AntiClockwiseSpeed,Float ClockwiseSpeed,Float SpeedMax,Float Deceleration);
		::Dynamic setRotationSpeed_dyn();

		void setRotationType(int RotationType,int StoppingType);
		::Dynamic setRotationType_dyn();

		void setMaximumRotationSpeed(Float Speed,hx::Null< bool >  LimitVelocity);
		::Dynamic setMaximumRotationSpeed_dyn();

		void setRotationDeceleration(Float Speed);
		::Dynamic setRotationDeceleration_dyn();

		void setRotationLimits(int MinimumAngle,int MaximumAngle);
		::Dynamic setRotationLimits_dyn();

		void disableRotationLimits();
		::Dynamic disableRotationLimits_dyn();

		void setRotationKeys(hx::Null< bool >  LeftRight,hx::Null< bool >  UpDown,::String CustomAntiClockwise,::String CustomClockwise);
		::Dynamic setRotationKeys_dyn();

		void setThrust(::String ThrustKey,Float ThrustSpeed,::String ReverseKey,hx::Null< Float >  ReverseSpeed);
		::Dynamic setThrust_dyn();

		void setMaximumSpeed(int SpeedX,int SpeedY,hx::Null< bool >  LimitVelocity);
		::Dynamic setMaximumSpeed_dyn();

		void setDeceleration(int SpeedX,int SpeedY);
		::Dynamic setDeceleration_dyn();

		void setGravity(int ForceX,int ForceY);
		::Dynamic setGravity_dyn();

		void flipGravity();
		::Dynamic flipGravity_dyn();

		void resetSpeeds(hx::Null< bool >  ResetX,hx::Null< bool >  ResetY);
		::Dynamic resetSpeeds_dyn();

		void setSounds( ::flixel::_hx_system::FlxSound Jump, ::flixel::_hx_system::FlxSound Fire, ::flixel::_hx_system::FlxSound Walk, ::flixel::_hx_system::FlxSound Thrust);
		::Dynamic setSounds_dyn();

		void setFireButton(::String Key,int Keymode,int RepeatDelay, ::Dynamic Callback,::String AltKey);
		::Dynamic setFireButton_dyn();

		void setJumpButton(::String Key,int Keymode,int Height,int Surface,hx::Null< int >  RepeatDelay,hx::Null< int >  JumpFromFall, ::Dynamic Callback,::String AltKey);
		::Dynamic setJumpButton_dyn();

		void setBounds(int X,int Y,int Width,int Height);
		::Dynamic setBounds_dyn();

		void removeBounds();
		::Dynamic removeBounds_dyn();

		bool moveUp();
		::Dynamic moveUp_dyn();

		bool moveDown();
		::Dynamic moveDown_dyn();

		bool moveLeft();
		::Dynamic moveLeft_dyn();

		bool moveRight();
		::Dynamic moveRight_dyn();

		bool moveAntiClockwise();
		::Dynamic moveAntiClockwise_dyn();

		bool moveClockwise();
		::Dynamic moveClockwise_dyn();

		bool moveThrust();
		::Dynamic moveThrust_dyn();

		bool moveReverse();
		::Dynamic moveReverse_dyn();

		bool runFire();
		::Dynamic runFire_dyn();

		bool runJump();
		::Dynamic runJump_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void setCustomKeys(::String CustomUpKey,::String CustomDownKey,::String CustomLeftKey,::String CustomRightKey);
		::Dynamic setCustomKeys_dyn();

		void setCursorControl(hx::Null< bool >  AllowUp,hx::Null< bool >  AllowDown,hx::Null< bool >  AllowLeft,hx::Null< bool >  AllowRight);
		::Dynamic setCursorControl_dyn();

		void setWASDControl(hx::Null< bool >  AllowUp,hx::Null< bool >  AllowDown,hx::Null< bool >  AllowLeft,hx::Null< bool >  AllowRight);
		::Dynamic setWASDControl_dyn();

		void setESDFControl(hx::Null< bool >  AllowUp,hx::Null< bool >  AllowDown,hx::Null< bool >  AllowLeft,hx::Null< bool >  AllowRight);
		::Dynamic setESDFControl_dyn();

		void setIJKLControl(hx::Null< bool >  AllowUp,hx::Null< bool >  AllowDown,hx::Null< bool >  AllowLeft,hx::Null< bool >  AllowRight);
		::Dynamic setIJKLControl_dyn();

		void setHJKLControl(hx::Null< bool >  AllowUp,hx::Null< bool >  AllowDown,hx::Null< bool >  AllowLeft,hx::Null< bool >  AllowRight);
		::Dynamic setHJKLControl_dyn();

		void setZQSDControl(hx::Null< bool >  AllowUp,hx::Null< bool >  AllowDown,hx::Null< bool >  AllowLeft,hx::Null< bool >  AllowRight);
		::Dynamic setZQSDControl_dyn();

		void setDvorakSimplifiedControl(hx::Null< bool >  AllowUp,hx::Null< bool >  AllowDown,hx::Null< bool >  AllowLeft,hx::Null< bool >  AllowRight);
		::Dynamic setDvorakSimplifiedControl_dyn();

		void setNumpadControl(hx::Null< bool >  AllowUp,hx::Null< bool >  AllowDown,hx::Null< bool >  AllowLeft,hx::Null< bool >  AllowRight);
		::Dynamic setNumpadControl_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace plugin
} // end namespace control

#endif /* INCLUDED_flixel_addons_plugin_control_FlxControlHandler */ 