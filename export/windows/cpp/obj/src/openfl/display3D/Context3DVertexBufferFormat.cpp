// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DVertexBufferFormat
#include <openfl/display3D/Context3DVertexBufferFormat.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::BYTES_4;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_1;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_2;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_3;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_4;

bool Context3DVertexBufferFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BYTES_4",00,7c,cf,d9)) { outValue = Context3DVertexBufferFormat_obj::BYTES_4; return true; }
	if (inName==HX_("FLOAT_1",6e,a7,dc,69)) { outValue = Context3DVertexBufferFormat_obj::FLOAT_1; return true; }
	if (inName==HX_("FLOAT_2",6f,a7,dc,69)) { outValue = Context3DVertexBufferFormat_obj::FLOAT_2; return true; }
	if (inName==HX_("FLOAT_3",70,a7,dc,69)) { outValue = Context3DVertexBufferFormat_obj::FLOAT_3; return true; }
	if (inName==HX_("FLOAT_4",71,a7,dc,69)) { outValue = Context3DVertexBufferFormat_obj::FLOAT_4; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Context3DVertexBufferFormat_obj)

int Context3DVertexBufferFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BYTES_4",00,7c,cf,d9)) return 0;
	if (inName==HX_("FLOAT_1",6e,a7,dc,69)) return 1;
	if (inName==HX_("FLOAT_2",6f,a7,dc,69)) return 2;
	if (inName==HX_("FLOAT_3",70,a7,dc,69)) return 3;
	if (inName==HX_("FLOAT_4",71,a7,dc,69)) return 4;
	return super::__FindIndex(inName);
}

int Context3DVertexBufferFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BYTES_4",00,7c,cf,d9)) return 0;
	if (inName==HX_("FLOAT_1",6e,a7,dc,69)) return 0;
	if (inName==HX_("FLOAT_2",6f,a7,dc,69)) return 0;
	if (inName==HX_("FLOAT_3",70,a7,dc,69)) return 0;
	if (inName==HX_("FLOAT_4",71,a7,dc,69)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Context3DVertexBufferFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BYTES_4",00,7c,cf,d9)) return BYTES_4;
	if (inName==HX_("FLOAT_1",6e,a7,dc,69)) return FLOAT_1;
	if (inName==HX_("FLOAT_2",6f,a7,dc,69)) return FLOAT_2;
	if (inName==HX_("FLOAT_3",70,a7,dc,69)) return FLOAT_3;
	if (inName==HX_("FLOAT_4",71,a7,dc,69)) return FLOAT_4;
	return super::__Field(inName,inCallProp);
}

static ::String Context3DVertexBufferFormat_obj_sStaticFields[] = {
	HX_("BYTES_4",00,7c,cf,d9),
	HX_("FLOAT_1",6e,a7,dc,69),
	HX_("FLOAT_2",6f,a7,dc,69),
	HX_("FLOAT_3",70,a7,dc,69),
	HX_("FLOAT_4",71,a7,dc,69),
	::String(null())
};

static void Context3DVertexBufferFormat_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::BYTES_4,"BYTES_4");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_1,"FLOAT_1");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_2,"FLOAT_2");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_3,"FLOAT_3");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_4,"FLOAT_4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DVertexBufferFormat_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::BYTES_4,"BYTES_4");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_1,"FLOAT_1");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_2,"FLOAT_2");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_3,"FLOAT_3");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_4,"FLOAT_4");
};
#endif

hx::Class Context3DVertexBufferFormat_obj::__mClass;

Dynamic __Create_Context3DVertexBufferFormat_obj() { return new Context3DVertexBufferFormat_obj; }

void Context3DVertexBufferFormat_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl.display3D.Context3DVertexBufferFormat","\x62","\x07","\x92","\xfd"), hx::TCanCast< Context3DVertexBufferFormat_obj >,Context3DVertexBufferFormat_obj_sStaticFields,0,
	&__Create_Context3DVertexBufferFormat_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DVertexBufferFormat_obj, Context3DVertexBufferFormat_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Context3DVertexBufferFormat_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Context3DVertexBufferFormat_obj::__GetStatic;
}

void Context3DVertexBufferFormat_obj::__boot()
{
BYTES_4 = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("BYTES_4","\x00","\x7c","\xcf","\xd9"),0,0);
FLOAT_1 = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("FLOAT_1","\x6e","\xa7","\xdc","\x69"),1,0);
FLOAT_2 = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("FLOAT_2","\x6f","\xa7","\xdc","\x69"),2,0);
FLOAT_3 = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("FLOAT_3","\x70","\xa7","\xdc","\x69"),3,0);
FLOAT_4 = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("FLOAT_4","\x71","\xa7","\xdc","\x69"),4,0);
}


} // end namespace openfl
} // end namespace display3D
