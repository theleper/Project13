// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb2d225a438df606_9_new,"flixel.animation.FlxBaseAnimation","new",0x893a9def,"flixel.animation.FlxBaseAnimation.new","flixel/animation/FlxBaseAnimation.hx",9,0x062a9a5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bb2d225a438df606_28_set_curIndex,"flixel.animation.FlxBaseAnimation","set_curIndex",0x05c5f580,"flixel.animation.FlxBaseAnimation.set_curIndex","flixel/animation/FlxBaseAnimation.hx",28,0x062a9a5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bb2d225a438df606_46_destroy,"flixel.animation.FlxBaseAnimation","destroy",0x93a46e09,"flixel.animation.FlxBaseAnimation.destroy","flixel/animation/FlxBaseAnimation.hx",46,0x062a9a5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bb2d225a438df606_51_update,"flixel.animation.FlxBaseAnimation","update",0xf1225bda,"flixel.animation.FlxBaseAnimation.update","flixel/animation/FlxBaseAnimation.hx",51,0x062a9a5f)
HX_LOCAL_STACK_FRAME(_hx_pos_bb2d225a438df606_55_clone,"flixel.animation.FlxBaseAnimation","clone",0xf2c3a2ac,"flixel.animation.FlxBaseAnimation.clone","flixel/animation/FlxBaseAnimation.hx",55,0x062a9a5f)
namespace flixel{
namespace animation{

void FlxBaseAnimation_obj::__construct( ::flixel::animation::FlxAnimationController Parent,::String Name){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_9_new)
HXLINE(  25)		this->curIndex = (int)0;
HXLINE(  41)		this->parent = Parent;
HXLINE(  42)		this->name = Name;
            	}

Dynamic FlxBaseAnimation_obj::__CreateEmpty() { return new FlxBaseAnimation_obj; }

void *FlxBaseAnimation_obj::_hx_vtable = 0;

Dynamic FlxBaseAnimation_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxBaseAnimation_obj > _hx_result = new FlxBaseAnimation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxBaseAnimation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x53945929;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_animation_FlxBaseAnimation__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::animation::FlxBaseAnimation_obj::destroy,
};

void *FlxBaseAnimation_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_animation_FlxBaseAnimation__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

int FlxBaseAnimation_obj::set_curIndex(int Value){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_28_set_curIndex)
HXLINE(  29)		this->curIndex = Value;
HXLINE(  31)		bool _hx_tmp;
HXDLIN(  31)		if (hx::IsNotNull( this->parent )) {
HXLINE(  31)			_hx_tmp = hx::IsEq( this->parent->_curAnim,hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE(  31)			_hx_tmp = false;
            		}
HXDLIN(  31)		if (_hx_tmp) {
HXLINE(  33)			this->parent->set_frameIndex(Value);
            		}
HXLINE(  36)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,set_curIndex,return )

void FlxBaseAnimation_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_46_destroy)
HXLINE(  47)		this->parent = null();
HXLINE(  48)		this->name = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseAnimation_obj,destroy,(void))

void FlxBaseAnimation_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_51_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,update,(void))

 ::flixel::animation::FlxBaseAnimation FlxBaseAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
            	HX_STACKFRAME(&_hx_pos_bb2d225a438df606_55_clone)
HXDLIN(  55)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,clone,return )


hx::ObjectPtr< FlxBaseAnimation_obj > FlxBaseAnimation_obj::__new( ::flixel::animation::FlxAnimationController Parent,::String Name) {
	hx::ObjectPtr< FlxBaseAnimation_obj > __this = new FlxBaseAnimation_obj();
	__this->__construct(Parent,Name);
	return __this;
}

hx::ObjectPtr< FlxBaseAnimation_obj > FlxBaseAnimation_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::animation::FlxAnimationController Parent,::String Name) {
	FlxBaseAnimation_obj *__this = (FlxBaseAnimation_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseAnimation_obj), true, "flixel.animation.FlxBaseAnimation"));
	*(void **)__this = FlxBaseAnimation_obj::_hx_vtable;
	__this->__construct(Parent,Name);
	return __this;
}

FlxBaseAnimation_obj::FlxBaseAnimation_obj()
{
}

void FlxBaseAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseAnimation);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(curIndex,"curIndex");
	HX_MARK_END_CLASS();
}

void FlxBaseAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(curIndex,"curIndex");
}

hx::Val FlxBaseAnimation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { return hx::Val( curIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curIndex") ) { return hx::Val( set_curIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxBaseAnimation_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::animation::FlxAnimationController >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_curIndex(inValue.Cast< int >()) );curIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("curIndex","\x72","\x95","\xc2","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxBaseAnimation_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::animation::FlxAnimationController*/ ,(int)offsetof(FlxBaseAnimation_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsString,(int)offsetof(FlxBaseAnimation_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(FlxBaseAnimation_obj,curIndex),HX_HCSTRING("curIndex","\x72","\x95","\xc2","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxBaseAnimation_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseAnimation_obj_sMemberFields[] = {
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("curIndex","\x72","\x95","\xc2","\x05"),
	HX_HCSTRING("set_curIndex","\xef","\x6c","\xd5","\xcf"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void FlxBaseAnimation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseAnimation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBaseAnimation_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseAnimation_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseAnimation_obj::__mClass;

void FlxBaseAnimation_obj::__register()
{
	hx::Object *dummy = new FlxBaseAnimation_obj;
	FlxBaseAnimation_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxBaseAnimation","\x7d","\x7a","\x23","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxBaseAnimation_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxBaseAnimation_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseAnimation_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBaseAnimation_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseAnimation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseAnimation_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace animation
