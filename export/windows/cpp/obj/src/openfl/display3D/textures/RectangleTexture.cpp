// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_UInt8Array
#include <openfl/_legacy/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_574e9a3948a11606_19_new,"openfl.display3D.textures.RectangleTexture","new",0xcccbdd5b,"openfl.display3D.textures.RectangleTexture.new","openfl/display3D/textures/RectangleTexture.hx",19,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_47_uploadFromBitmapData,"openfl.display3D.textures.RectangleTexture","uploadFromBitmapData",0x711b2e49,"openfl.display3D.textures.RectangleTexture.uploadFromBitmapData","openfl/display3D/textures/RectangleTexture.hx",47,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_65_uploadFromByteArray,"openfl.display3D.textures.RectangleTexture","uploadFromByteArray",0xfd7a0ae1,"openfl.display3D.textures.RectangleTexture.uploadFromByteArray","openfl/display3D/textures/RectangleTexture.hx",65,0x83565556)
namespace openfl{
namespace display3D{
namespace textures{

void RectangleTexture_obj::__construct( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_19_new)
HXLINE(  21)		this->optimizeForRenderToTexture = optimize;
HXLINE(  27)		super::__construct(context,glTexture,width,height);
HXLINE(  30)		if (this->optimizeForRenderToTexture) {
HXLINE(  31)			::openfl::_legacy::gl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
            		}
HXLINE(  33)		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
HXLINE(  34)		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
HXLINE(  35)		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
HXLINE(  36)		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
            	}

Dynamic RectangleTexture_obj::__CreateEmpty() { return new RectangleTexture_obj; }

void *RectangleTexture_obj::_hx_vtable = 0;

Dynamic RectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RectangleTexture_obj > _hx_result = new RectangleTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool RectangleTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19affbf1) {
		if (inClassId<=(int)0x0b79cce7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b79cce7;
		} else {
			return inClassId==(int)0x19affbf1;
		}
	} else {
		return inClassId==(int)0x25b00754;
	}
}

void RectangleTexture_obj::uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_574e9a3948a11606_47_uploadFromBitmapData)
HXLINE(  52)		int rgbaData = bitmapData->get_width();
HXDLIN(  52)		int rgbaData1 = bitmapData->get_height();
HXDLIN(  52)		 ::openfl::_legacy::display::BitmapData rgbaData2 =  ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,rgbaData,rgbaData1,bitmapData->get_transparent(),null(),null());
HXDLIN(  52)		 ::openfl::_legacy::geom::Rectangle rect = bitmapData->get_rect();
HXDLIN(  52)		 ::openfl::_legacy::geom::Point point =  ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,(int)0,(int)0);
HXDLIN(  52)		rgbaData2->copyChannel(bitmapData,rect,point,(int)2,(int)1);
HXDLIN(  52)		rgbaData2->copyChannel(bitmapData,rect,point,(int)4,(int)2);
HXDLIN(  52)		rgbaData2->copyChannel(bitmapData,rect,point,(int)8,(int)4);
HXDLIN(  52)		rgbaData2->copyChannel(bitmapData,rect,point,(int)1,(int)8);
HXDLIN(  52)		 ::openfl::_legacy::utils::ByteArray p = rgbaData2->getPixels(rect);
HXLINE(  57)		this->width = bitmapData->get_width();
HXLINE(  58)		this->height = bitmapData->get_height();
HXLINE(  60)		this->uploadFromByteArray(p,(int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromBitmapData,(void))

void RectangleTexture_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_574e9a3948a11606_65_uploadFromByteArray)
HXLINE(  67)		{
HXLINE(  67)			 ::openfl::_legacy::gl::GLTexture texture = this->glTexture;
HXDLIN(  67)			 ::Dynamic _hx_tmp;
HXDLIN(  67)			if (hx::IsNull( texture )) {
HXLINE(  67)				_hx_tmp = null();
            			}
            			else {
HXLINE(  67)				_hx_tmp = texture->id;
            			}
HXDLIN(  67)			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,_hx_tmp);
            		}
HXLINE(  93)		if (this->optimizeForRenderToTexture) {
HXLINE(  95)			::openfl::_legacy::gl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
HXLINE(  96)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
HXLINE(  97)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
HXLINE(  98)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
HXLINE(  99)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
            		}
HXLINE( 106)		 ::openfl::_legacy::utils::UInt8Array source =  ::openfl::_legacy::utils::UInt8Array_obj::__alloc( HX_CTX ,data,null(),null());
HXLINE( 112)		{
HXLINE( 112)			int width = this->width;
HXDLIN( 112)			int height = this->height;
HXDLIN( 112)			 ::Dynamic _hx_tmp1 = hx::ClassOf< ::openfl::_legacy::gl::GL >();
HXDLIN( 112)			 ::openfl::_legacy::utils::ByteArray _hx_tmp2;
HXDLIN( 112)			if (hx::IsNull( source )) {
HXLINE( 112)				_hx_tmp2 = null();
            			}
            			else {
HXLINE( 112)				_hx_tmp2 = source->getByteBuffer();
            			}
HXDLIN( 112)			 ::Dynamic _hx_tmp3;
HXDLIN( 112)			if (hx::IsNull( source )) {
HXLINE( 112)				_hx_tmp3 = null();
            			}
            			else {
HXLINE( 112)				_hx_tmp3 = source->getStart();
            			}
HXDLIN( 112)			::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6408,width,height,(int)0,(int)6408,(int)5121,_hx_tmp2,_hx_tmp3);
            		}
HXLINE( 113)		::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromByteArray,(void))


hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__new( ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height) {
	hx::ObjectPtr< RectangleTexture_obj > __this = new RectangleTexture_obj();
	__this->__construct(context,glTexture,optimize,width,height);
	return __this;
}

hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context, ::openfl::_legacy::gl::GLTexture glTexture,bool optimize,int width,int height) {
	RectangleTexture_obj *__this = (RectangleTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RectangleTexture_obj), true, "openfl.display3D.textures.RectangleTexture"));
	*(void **)__this = RectangleTexture_obj::_hx_vtable;
	__this->__construct(context,glTexture,optimize,width,height);
	return __this;
}

RectangleTexture_obj::RectangleTexture_obj()
{
}

hx::Val RectangleTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return hx::Val( optimizeForRenderToTexture ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RectangleTexture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectangleTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RectangleTexture_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RectangleTexture_obj,optimizeForRenderToTexture),HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RectangleTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String RectangleTexture_obj_sMemberFields[] = {
	HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	::String(null()) };

static void RectangleTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RectangleTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleTexture_obj::__mClass;

void RectangleTexture_obj::__register()
{
	hx::Object *dummy = new RectangleTexture_obj;
	RectangleTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.RectangleTexture","\xe9","\x93","\xed","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RectangleTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RectangleTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RectangleTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RectangleTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RectangleTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
