// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionHandler
#include <flixel/system/debug/completion/CompletionHandler.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#include <flixel/system/debug/completion/CompletionList.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#include <flixel/system/debug/console/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleHistory
#include <flixel/system/debug/console/ConsoleHistory.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c69022abc8c5c26b_30_new,"flixel.system.debug.console.Console","new",0x900a6c8a,"flixel.system.debug.console.Console.new","flixel/system/debug/console/Console.hx",30,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_96_createInputTextField,"flixel.system.debug.console.Console","createInputTextField",0x91c24015,"flixel.system.debug.console.Console.createInputTextField","flixel/system/debug/console/Console.hx",96,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_122_registerEventListeners,"flixel.system.debug.console.Console","registerEventListeners",0x714c11de,"flixel.system.debug.console.Console.registerEventListeners","flixel/system/debug/console/Console.hx",122,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_126_registerEventListeners,"flixel.system.debug.console.Console","registerEventListeners",0x714c11de,"flixel.system.debug.console.Console.registerEventListeners","flixel/system/debug/console/Console.hx",126,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_111_registerEventListeners,"flixel.system.debug.console.Console","registerEventListeners",0x714c11de,"flixel.system.debug.console.Console.registerEventListeners","flixel/system/debug/console/Console.hx",111,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_134_update,"flixel.system.debug.console.Console","update",0x661b601f,"flixel.system.debug.console.Console.update","flixel/system/debug/console/Console.hx",134,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_151_onFocus,"flixel.system.debug.console.Console","onFocus",0xeecff763,"flixel.system.debug.console.Console.onFocus","flixel/system/debug/console/Console.hx",151,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_174_onFocusLost,"flixel.system.debug.console.Console","onFocusLost",0x2ed3bae7,"flixel.system.debug.console.Console.onFocusLost","flixel/system/debug/console/Console.hx",174,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_282_registerFunction,"flixel.system.debug.console.Console","registerFunction",0xf8dd3a31,"flixel.system.debug.console.Console.registerFunction","flixel/system/debug/console/Console.hx",282,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_300_registerObject,"flixel.system.debug.console.Console","registerObject",0x0bbfe598,"flixel.system.debug.console.Console.registerObject","flixel/system/debug/console/Console.hx",300,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_313_registerClass,"flixel.system.debug.console.Console","registerClass",0x7ad06f7f,"flixel.system.debug.console.Console.registerClass","flixel/system/debug/console/Console.hx",313,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_317_destroy,"flixel.system.debug.console.Console","destroy",0x788f2624,"flixel.system.debug.console.Console.destroy","flixel/system/debug/console/Console.hx",317,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_343_updateSize,"flixel.system.debug.console.Console","updateSize",0x97e42880,"flixel.system.debug.console.Console.updateSize","flixel/system/debug/console/Console.hx",343,0x367943c8)
HX_LOCAL_STACK_FRAME(_hx_pos_c69022abc8c5c26b_37_boot,"flixel.system.debug.console.Console","boot",0x712d8cc8,"flixel.system.debug.console.Console.boot","flixel/system/debug/console/Console.hx",37,0x367943c8)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace console{

void Console_obj::__construct( ::flixel::_hx_system::debug::completion::CompletionList completionList){
            	HX_GC_STACKFRAME(&_hx_pos_c69022abc8c5c26b_30_new)
HXLINE(  64)		this->stageMouseDown = false;
HXLINE(  63)		this->inputMouseDown = false;
HXLINE(  55)		this->objectStack = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  50)		this->registeredHelp =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  46)		this->registeredFunctions =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  42)		this->registeredObjects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  76)		super::__construct(HX_("Console",37,13,27,e6), ::flixel::_hx_system::debug::GraphicConsole_obj::__alloc( HX_CTX ,(int)0,(int)0,null(),null()),(int)0,(int)0,false,null(),null());
HXLINE(  77)		this->completionList = completionList;
HXLINE(  78)		completionList->setY((this->get_y() + (int)15));
HXLINE(  84)		this->history =  ::flixel::_hx_system::debug::console::ConsoleHistory_obj::__alloc( HX_CTX );
HXLINE(  85)		this->createInputTextField();
HXLINE(  86)		 ::flixel::_hx_system::debug::completion::CompletionHandler_obj::__alloc( HX_CTX ,completionList,this->input);
HXLINE(  87)		this->registerEventListeners();
HXLINE(  91)		 ::flixel::_hx_system::debug::console::ConsoleCommands_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Console_obj::__CreateEmpty() { return new Console_obj; }

void *Console_obj::_hx_vtable = 0;

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Console_obj > _hx_result = new Console_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Console_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d2d7617) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a || inClassId==(int)0x3d2d7617;
		}
	} else {
		if (inClassId<=(int)0x5fcdb6d3) {
			return inClassId==(int)0x55cf6de8 || inClassId==(int)0x5fcdb6d3;
		} else {
			return inClassId==(int)0x619ca9b8;
		}
	}
}

void Console_obj::createInputTextField(){
            	HX_GC_STACKFRAME(&_hx_pos_c69022abc8c5c26b_96_createInputTextField)
HXLINE(  98)		this->input =  ::openfl::_legacy::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  99)		this->input->set_embedFonts(true);
HXLINE( 100)		 ::openfl::_legacy::text::TextField _hx_tmp = this->input;
HXDLIN( 100)		_hx_tmp->set_defaultTextFormat( ::openfl::_legacy::text::TextFormat_obj::__alloc( HX_CTX ,::flixel::_hx_system::FlxAssets_obj::FONT_DEBUGGER,(int)12,(int)16777215,false,false,false,null(),null(),null(),null(),null(),null(),null()));
HXLINE( 102)		this->input->set_text(HX_("Using the console requires hscript - please run 'haxelib install hscript'.",1a,91,ca,5f));
HXLINE( 103)		 ::openfl::_legacy::text::TextField _hx_tmp1 = this->input;
HXDLIN( 103)		_hx_tmp1->set_width((this->_width - (int)4));
HXLINE( 104)		 ::openfl::_legacy::text::TextField _hx_tmp2 = this->input;
HXDLIN( 104)		_hx_tmp2->set_height((this->_height - (int)15));
HXLINE( 105)		this->input->set_x((int)2);
HXLINE( 106)		this->input->set_y((int)15);
HXLINE( 107)		this->addChild(this->input);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,createInputTextField,(void))

void Console_obj::registerEventListeners(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::flixel::_hx_system::debug::console::Console,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_122_registerEventListeners)
HXLINE( 122)			_gthis->inputMouseDown = true;
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::flixel::_hx_system::debug::console::Console,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic _1){
            			HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_126_registerEventListeners)
HXLINE( 126)			_gthis->stageMouseDown = true;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_111_registerEventListeners)
HXLINE( 110)		 ::flixel::_hx_system::debug::console::Console _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 120)		this->input->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN, ::Dynamic(new _hx_Closure_0(_gthis)),null(),null(),null());
HXLINE( 124)		::openfl::_legacy::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN, ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,registerEventListeners,(void))

void Console_obj::update(){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_134_update)
HXLINE( 135)		this->super::update();
HXLINE( 137)		bool _hx_tmp;
HXDLIN( 137)		bool _hx_tmp1;
HXDLIN( 137)		 ::openfl::_legacy::display::InteractiveObject _hx_tmp2 = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_focus();
HXDLIN( 137)		if (hx::IsEq( _hx_tmp2,this->input )) {
HXLINE( 137)			_hx_tmp1 = this->stageMouseDown;
            		}
            		else {
HXLINE( 137)			_hx_tmp1 = false;
            		}
HXDLIN( 137)		if (_hx_tmp1) {
HXLINE( 137)			_hx_tmp = !(this->inputMouseDown);
            		}
            		else {
HXLINE( 137)			_hx_tmp = false;
            		}
HXDLIN( 137)		if (_hx_tmp) {
HXLINE( 139)			::openfl::_legacy::Lib_obj::get_current()->get_stage()->set_focus(null());
HXLINE( 141)			::flixel::FlxG_obj::game->onFocus(null());
            		}
HXLINE( 144)		this->stageMouseDown = false;
HXLINE( 145)		this->inputMouseDown = false;
            	}


void Console_obj::onFocus( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_151_onFocus)
HXLINE( 159)		if (::flixel::FlxG_obj::console->autoPause) {
HXLINE( 160)			::flixel::FlxG_obj::vcr->pause();
            		}
HXLINE( 164)		::flixel::FlxG_obj::keys->enabled = false;
HXLINE( 167)		if ((this->input->get_text() == HX_("Using the console requires hscript - please run 'haxelib install hscript'.",1a,91,ca,5f))) {
HXLINE( 168)			this->input->set_text(HX_("",00,00,00,00));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocus,(void))

void Console_obj::onFocusLost( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_174_onFocusLost)
HXLINE( 182)		if (::flixel::FlxG_obj::console->autoPause) {
HXLINE( 183)			::flixel::FlxG_obj::vcr->resume();
            		}
HXLINE( 187)		::flixel::FlxG_obj::keys->enabled = true;
HXLINE( 190)		if ((this->input->get_text() == HX_("",00,00,00,00))) {
HXLINE( 191)			this->input->set_text(HX_("Using the console requires hscript - please run 'haxelib install hscript'.",1a,91,ca,5f));
            		}
HXLINE( 194)		this->completionList->close();
HXLINE( 195)		::flixel::FlxG_obj::game->debugger->onMouseFocusLost();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onFocusLost,(void))

void Console_obj::registerFunction(::String functionAlias, ::Dynamic func,::String helpText){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_282_registerFunction)
HXLINE( 283)		this->registeredFunctions->set(functionAlias,func);
HXLINE( 288)		if (hx::IsNotNull( helpText )) {
HXLINE( 289)			this->registeredHelp->set(functionAlias,helpText);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Console_obj,registerFunction,(void))

void Console_obj::registerObject(::String objectAlias, ::Dynamic anyObject){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_300_registerObject)
HXDLIN( 300)		this->registeredObjects->set(objectAlias,anyObject);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,registerObject,(void))

void Console_obj::registerClass(hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_313_registerClass)
HXDLIN( 313)		::String objectAlias = ::flixel::util::FlxStringUtil_obj::getClassName(cl,true);
HXDLIN( 313)		::haxe::IMap_obj::set(this->registeredObjects,objectAlias,( ( ::Dynamic)(cl) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,registerClass,(void))

void Console_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_317_destroy)
HXLINE( 318)		this->super::destroy();
HXLINE( 326)		if (hx::IsNotNull( this->input )) {
HXLINE( 328)			this->removeChild(this->input);
HXLINE( 329)			this->input = null();
            		}
HXLINE( 332)		this->registeredObjects = null();
HXLINE( 333)		this->registeredFunctions = null();
HXLINE( 334)		this->registeredHelp = null();
HXLINE( 336)		this->objectStack = null();
            	}


void Console_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_343_updateSize)
HXLINE( 344)		this->super::updateSize();
HXLINE( 346)		 ::openfl::_legacy::text::TextField _hx_tmp = this->input;
HXDLIN( 346)		_hx_tmp->set_width((this->_width - (int)4));
HXLINE( 347)		 ::openfl::_legacy::text::TextField _hx_tmp1 = this->input;
HXDLIN( 347)		_hx_tmp1->set_height((this->_height - (int)15));
            	}


::String Console_obj::DEFAULT_TEXT;


hx::ObjectPtr< Console_obj > Console_obj::__new( ::flixel::_hx_system::debug::completion::CompletionList completionList) {
	hx::ObjectPtr< Console_obj > __this = new Console_obj();
	__this->__construct(completionList);
	return __this;
}

hx::ObjectPtr< Console_obj > Console_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::completion::CompletionList completionList) {
	Console_obj *__this = (Console_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Console_obj), true, "flixel.system.debug.console.Console"));
	*(void **)__this = Console_obj::_hx_vtable;
	__this->__construct(completionList);
	return __this;
}

Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_MARK_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_MARK_MEMBER_NAME(registeredHelp,"registeredHelp");
	HX_MARK_MEMBER_NAME(objectStack,"objectStack");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(inputMouseDown,"inputMouseDown");
	HX_MARK_MEMBER_NAME(stageMouseDown,"stageMouseDown");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(completionList,"completionList");
	 ::flixel::_hx_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(registeredObjects,"registeredObjects");
	HX_VISIT_MEMBER_NAME(registeredFunctions,"registeredFunctions");
	HX_VISIT_MEMBER_NAME(registeredHelp,"registeredHelp");
	HX_VISIT_MEMBER_NAME(objectStack,"objectStack");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(inputMouseDown,"inputMouseDown");
	HX_VISIT_MEMBER_NAME(stageMouseDown,"stageMouseDown");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(completionList,"completionList");
	 ::flixel::_hx_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Console_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return hx::Val( history ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return hx::Val( onFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { return hx::Val( objectStack ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return hx::Val( onFocusLost_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerClass") ) { return hx::Val( registerClass_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registeredHelp") ) { return hx::Val( registeredHelp ); }
		if (HX_FIELD_EQ(inName,"inputMouseDown") ) { return hx::Val( inputMouseDown ); }
		if (HX_FIELD_EQ(inName,"stageMouseDown") ) { return hx::Val( stageMouseDown ); }
		if (HX_FIELD_EQ(inName,"completionList") ) { return hx::Val( completionList ); }
		if (HX_FIELD_EQ(inName,"registerObject") ) { return hx::Val( registerObject_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return hx::Val( registerFunction_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { return hx::Val( registeredObjects ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { return hx::Val( registeredFunctions ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createInputTextField") ) { return hx::Val( createInputTextField_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"registerEventListeners") ) { return hx::Val( registerEventListeners_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Console_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast<  ::flixel::_hx_system::debug::console::ConsoleHistory >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectStack") ) { objectStack=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registeredHelp") ) { registeredHelp=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputMouseDown") ) { inputMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageMouseDown") ) { stageMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast<  ::flixel::_hx_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registeredObjects") ) { registeredObjects=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"registeredFunctions") ) { registeredFunctions=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"));
	outFields->push(HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"));
	outFields->push(HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"));
	outFields->push(HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d"));
	outFields->push(HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Console_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredObjects),HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredFunctions),HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Console_obj,registeredHelp),HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,objectStack),HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsBool,(int)offsetof(Console_obj,inputMouseDown),HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d")},
	{hx::fsBool,(int)offsetof(Console_obj,stageMouseDown),HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40")},
	{hx::fsObject /*::flixel::_hx_system::debug::console::ConsoleHistory*/ ,(int)offsetof(Console_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsObject /*::flixel::_hx_system::debug::completion::CompletionList*/ ,(int)offsetof(Console_obj,completionList),HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Console_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Console_obj::DEFAULT_TEXT,HX_HCSTRING("DEFAULT_TEXT","\x4b","\x9c","\x59","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Console_obj_sMemberFields[] = {
	HX_HCSTRING("registeredObjects","\x72","\x87","\x9b","\x2a"),
	HX_HCSTRING("registeredFunctions","\x79","\x8c","\x8a","\x1e"),
	HX_HCSTRING("registeredHelp","\x63","\xe5","\xae","\xb7"),
	HX_HCSTRING("objectStack","\x09","\x84","\x3a","\xf3"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("inputMouseDown","\xbd","\xfb","\x87","\x2d"),
	HX_HCSTRING("stageMouseDown","\x89","\xde","\x11","\x40"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"),
	HX_HCSTRING("createInputTextField","\x7f","\x2b","\x43","\x44"),
	HX_HCSTRING("registerEventListeners","\xc8","\x2b","\x6e","\x76"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("registerFunction","\x9b","\xa8","\x15","\x13"),
	HX_HCSTRING("registerObject","\x82","\x05","\x81","\xdb"),
	HX_HCSTRING("registerClass","\xd5","\x3a","\xc1","\x3d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	::String(null()) };

static void Console_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Console_obj::DEFAULT_TEXT,"DEFAULT_TEXT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Console_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Console_obj::DEFAULT_TEXT,"DEFAULT_TEXT");
};

#endif

hx::Class Console_obj::__mClass;

static ::String Console_obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT_TEXT","\x4b","\x9c","\x59","\x2d"),
	::String(null())
};

void Console_obj::__register()
{
	hx::Object *dummy = new Console_obj;
	Console_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.console.Console","\x98","\x1f","\xeb","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Console_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Console_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Console_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Console_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Console_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Console_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Console_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Console_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c69022abc8c5c26b_37_boot)
HXDLIN(  37)		DEFAULT_TEXT = HX_("Using the console requires hscript - please run 'haxelib install hscript'.",1a,91,ca,5f);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console
