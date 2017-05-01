// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4dc5d43f2c7b5842_639_new,"flixel.ui._FlxButton.FlxButtonEvent","new",0xea40fb69,"flixel.ui._FlxButton.FlxButtonEvent.new","flixel/ui/FlxButton.hx",639,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_4dc5d43f2c7b5842_651_destroy,"flixel.ui._FlxButton.FlxButtonEvent","destroy",0x72801083,"flixel.ui._FlxButton.FlxButtonEvent.destroy","flixel/ui/FlxButton.hx",651,0xc64cf442)
HX_LOCAL_STACK_FRAME(_hx_pos_4dc5d43f2c7b5842_663_fire,"flixel.ui._FlxButton.FlxButtonEvent","fire",0x0954508d,"flixel.ui._FlxButton.FlxButtonEvent.fire","flixel/ui/FlxButton.hx",663,0xc64cf442)
namespace flixel{
namespace ui{
namespace _FlxButton{

void FlxButtonEvent_obj::__construct( ::Dynamic Callback, ::flixel::_hx_system::FlxSound sound){
            	HX_STACKFRAME(&_hx_pos_4dc5d43f2c7b5842_639_new)
HXLINE( 640)		this->callback = Callback;
HXLINE( 643)		this->sound = sound;
            	}

Dynamic FlxButtonEvent_obj::__CreateEmpty() { return new FlxButtonEvent_obj; }

void *FlxButtonEvent_obj::_hx_vtable = 0;

Dynamic FlxButtonEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxButtonEvent_obj > _hx_result = new FlxButtonEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxButtonEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b7a30f3;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_ui__FlxButton_FlxButtonEvent__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::ui::_FlxButton::FlxButtonEvent_obj::destroy,
};

void *FlxButtonEvent_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_ui__FlxButton_FlxButtonEvent__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxButtonEvent_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_4dc5d43f2c7b5842_651_destroy)
HXLINE( 652)		this->callback = null();
HXLINE( 655)		this->sound = ( ( ::flixel::_hx_system::FlxSound)(::flixel::util::FlxDestroyUtil_obj::destroy(this->sound)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxButtonEvent_obj,destroy,(void))

void FlxButtonEvent_obj::fire(){
            	HX_STACKFRAME(&_hx_pos_4dc5d43f2c7b5842_663_fire)
HXLINE( 664)		if (hx::IsNotNull( this->callback )) {
HXLINE( 666)			this->callback();
            		}
HXLINE( 670)		if (hx::IsNotNull( this->sound )) {
HXLINE( 672)			this->sound->play(true,null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxButtonEvent_obj,fire,(void))


hx::ObjectPtr< FlxButtonEvent_obj > FlxButtonEvent_obj::__new( ::Dynamic Callback, ::flixel::_hx_system::FlxSound sound) {
	hx::ObjectPtr< FlxButtonEvent_obj > __this = new FlxButtonEvent_obj();
	__this->__construct(Callback,sound);
	return __this;
}

hx::ObjectPtr< FlxButtonEvent_obj > FlxButtonEvent_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic Callback, ::flixel::_hx_system::FlxSound sound) {
	FlxButtonEvent_obj *__this = (FlxButtonEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxButtonEvent_obj), true, "flixel.ui._FlxButton.FlxButtonEvent"));
	*(void **)__this = FlxButtonEvent_obj::_hx_vtable;
	__this->__construct(Callback,sound);
	return __this;
}

FlxButtonEvent_obj::FlxButtonEvent_obj()
{
}

void FlxButtonEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxButtonEvent);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_END_CLASS();
}

void FlxButtonEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(sound,"sound");
}

hx::Val FlxButtonEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return hx::Val( fire_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return hx::Val( sound ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return hx::Val( callback ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxButtonEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxButtonEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxButtonEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxButtonEvent_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsObject /*::flixel::_hx_system::FlxSound*/ ,(int)offsetof(FlxButtonEvent_obj,sound),HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxButtonEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxButtonEvent_obj_sMemberFields[] = {
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	::String(null()) };

static void FlxButtonEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButtonEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxButtonEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButtonEvent_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxButtonEvent_obj::__mClass;

void FlxButtonEvent_obj::__register()
{
	hx::Object *dummy = new FlxButtonEvent_obj;
	FlxButtonEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui._FlxButton.FlxButtonEvent","\xf7","\x12","\x9b","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxButtonEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxButtonEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxButtonEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxButtonEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxButtonEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxButtonEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxButton
