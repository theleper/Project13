// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a71b198b2cf5b646_28_boot,"AssetPaths","boot",0x7f6e2362,"AssetPaths.boot","flixel/system/macros/FlxAssetPaths.hx",28,0x71054749)

void AssetPaths_obj::__construct() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return new AssetPaths_obj; }

void *AssetPaths_obj::_hx_vtable = 0;

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetPaths_obj > _hx_result = new AssetPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60e60f3e;
}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::lvl001__oel;

::String AssetPaths_obj::lvl1__oel;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::Level1BG__png;

::String AssetPaths_obj::tiles__png;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AssetPaths_obj_sMemberStorageInfo = 0;
static hx::StaticInfo AssetPaths_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::lvl001__oel,HX_HCSTRING("lvl001__oel","\x47","\x18","\x2a","\x0d")},
	{hx::fsString,(void *) &AssetPaths_obj::lvl1__oel,HX_HCSTRING("lvl1__oel","\xc7","\xa1","\xd4","\x6f")},
	{hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93")},
	{hx::fsString,(void *) &AssetPaths_obj::Level1BG__png,HX_HCSTRING("Level1BG__png","\xf7","\x5a","\x23","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::tiles__png,HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d")},
	{hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f")},
	{hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void AssetPaths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::lvl001__oel,"lvl001__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::lvl1__oel,"lvl1__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Level1BG__png,"Level1BG__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetPaths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::lvl001__oel,"lvl001__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::lvl1__oel,"lvl1__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Level1BG__png,"Level1BG__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String AssetPaths_obj_sStaticFields[] = {
	HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8"),
	HX_HCSTRING("lvl001__oel","\x47","\x18","\x2a","\x0d"),
	HX_HCSTRING("lvl1__oel","\xc7","\xa1","\xd4","\x6f"),
	HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93"),
	HX_HCSTRING("Level1BG__png","\xf7","\x5a","\x23","\xe8"),
	HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d"),
	HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f"),
	HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02"),
	::String(null())
};

void AssetPaths_obj::__register()
{
	hx::Object *dummy = new AssetPaths_obj;
	AssetPaths_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetPaths_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AssetPaths_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetPaths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPaths_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		data_goes_here__txt = HX_("assets/data/data-goes-here.txt",5f,4b,b2,8e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		lvl001__oel = HX_("assets/data/lvl001.oel",b0,e5,bc,db);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		lvl1__oel = HX_("assets/data/lvl1.oel",f0,db,e8,de);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		images_go_here__txt = HX_("assets/images/images-go-here.txt",0d,1d,45,a6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		Level1BG__png = HX_("assets/images/Level1BG.png",b8,33,76,51);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		tiles__png = HX_("assets/images/tiles.png",35,bc,d1,f5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		music_goes_here__txt = HX_("assets/music/music-goes-here.txt",6b,32,60,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_28_boot)
HXDLIN(  28)		sounds_go_here__txt = HX_("assets/sounds/sounds-go-here.txt",8d,b6,3d,a7);
            	}
}

