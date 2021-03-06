// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
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
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
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
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d4c828664754b74a_14_new,"flixel.system.debug.completion.CompletionHandler","new",0xfa133d96,"flixel.system.debug.completion.CompletionHandler.new","flixel/system/debug/completion/CompletionHandler.hx",14,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_34_getTextUntilCaret,"flixel.system.debug.completion.CompletionHandler","getTextUntilCaret",0x57018dfe,"flixel.system.debug.completion.CompletionHandler.getTextUntilCaret","flixel/system/debug/completion/CompletionHandler.hx",34,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_41_getCaretIndex,"flixel.system.debug.completion.CompletionHandler","getCaretIndex",0x5ae25f7b,"flixel.system.debug.completion.CompletionHandler.getCaretIndex","flixel/system/debug/completion/CompletionHandler.hx",41,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_48_onKeyUp,"flixel.system.debug.completion.CompletionHandler","onKeyUp",0x7f599871,"flixel.system.debug.completion.CompletionHandler.onKeyUp","flixel/system/debug/completion/CompletionHandler.hx",48,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_75_invokeCompletion,"flixel.system.debug.completion.CompletionHandler","invokeCompletion",0x74f655be,"flixel.system.debug.completion.CompletionHandler.invokeCompletion","flixel/system/debug/completion/CompletionHandler.hx",75,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_111_getGlobals,"flixel.system.debug.completion.CompletionHandler","getGlobals",0x3af6d144,"flixel.system.debug.completion.CompletionHandler.getGlobals","flixel/system/debug/completion/CompletionHandler.hx",111,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_116_getCharXPosition,"flixel.system.debug.completion.CompletionHandler","getCharXPosition",0x2e5e3e1f,"flixel.system.debug.completion.CompletionHandler.getCharXPosition","flixel/system/debug/completion/CompletionHandler.hx",116,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_126_getCompletedText,"flixel.system.debug.completion.CompletionHandler","getCompletedText",0xf1336e6c,"flixel.system.debug.completion.CompletionHandler.getCompletedText","flixel/system/debug/completion/CompletionHandler.hx",126,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_130_completed,"flixel.system.debug.completion.CompletionHandler","completed",0x0b4edb41,"flixel.system.debug.completion.CompletionHandler.completed","flixel/system/debug/completion/CompletionHandler.hx",130,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_138_selectionChanged,"flixel.system.debug.completion.CompletionHandler","selectionChanged",0xb4bbcb12,"flixel.system.debug.completion.CompletionHandler.selectionChanged","flixel/system/debug/completion/CompletionHandler.hx",138,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_154_completionClosed,"flixel.system.debug.completion.CompletionHandler","completionClosed",0xa9f12ef2,"flixel.system.debug.completion.CompletionHandler.completionClosed","flixel/system/debug/completion/CompletionHandler.hx",154,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_163_getPathBeforeDot,"flixel.system.debug.completion.CompletionHandler","getPathBeforeDot",0x9fcc8f79,"flixel.system.debug.completion.CompletionHandler.getPathBeforeDot","flixel/system/debug/completion/CompletionHandler.hx",163,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_170_getWordAfterDot,"flixel.system.debug.completion.CompletionHandler","getWordAfterDot",0x4edfa1a3,"flixel.system.debug.completion.CompletionHandler.getWordAfterDot","flixel/system/debug/completion/CompletionHandler.hx",170,0x776a5e1a)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c828664754b74a_185_getLastWord,"flixel.system.debug.completion.CompletionHandler","getLastWord",0xa19a712c,"flixel.system.debug.completion.CompletionHandler.getLastWord","flixel/system/debug/completion/CompletionHandler.hx",185,0x776a5e1a)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace completion{

void CompletionHandler_obj::__construct( ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::_legacy::text::TextField input){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_14_new)
HXLINE(  18)		this->watchingSelection = false;
HXLINE(  22)		this->completionList = completionList;
HXLINE(  23)		this->input = input;
HXLINE(  25)		completionList->completed = this->completed_dyn();
HXLINE(  26)		completionList->selectionChanged = this->selectionChanged_dyn();
HXLINE(  27)		completionList->closed = this->completionClosed_dyn();
HXLINE(  29)		input->addEventListener(::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
            	}

Dynamic CompletionHandler_obj::__CreateEmpty() { return new CompletionHandler_obj; }

void *CompletionHandler_obj::_hx_vtable = 0;

Dynamic CompletionHandler_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CompletionHandler_obj > _hx_result = new CompletionHandler_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CompletionHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x189c214e;
}

::String CompletionHandler_obj::getTextUntilCaret(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_34_getTextUntilCaret)
HXDLIN(  34)		::String _hx_tmp = this->input->get_text();
HXDLIN(  34)		return _hx_tmp.substring((int)0,this->getCaretIndex());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getTextUntilCaret,return )

int CompletionHandler_obj::getCaretIndex(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_41_getCaretIndex)
HXDLIN(  41)		return this->input->get_text().length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getCaretIndex,return )

void CompletionHandler_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_48_onKeyUp)
HXLINE(  49)		::String text = this->getTextUntilCaret();
HXLINE(  52)		bool _hx_tmp;
HXDLIN(  52)		bool _hx_tmp1;
HXDLIN(  52)		if (!(::StringTools_obj::endsWith(text,HX_(")",29,00,00,00)))) {
HXLINE(  52)			_hx_tmp1 = ::StringTools_obj::endsWith(text,HX_("\"",22,00,00,00));
            		}
            		else {
HXLINE(  52)			_hx_tmp1 = true;
            		}
HXDLIN(  52)		if (!(_hx_tmp1)) {
HXLINE(  52)			_hx_tmp = ::StringTools_obj::endsWith(text,HX_("'",27,00,00,00));
            		}
            		else {
HXLINE(  52)			_hx_tmp = true;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  54)			this->completionList->close();
HXLINE(  55)			return;
            		}
HXLINE(  58)		{
HXLINE(  58)			int _g = e->keyCode;
HXDLIN(  58)			switch((int)(_g)){
            				case (int)13: case (int)27: case (int)38: case (int)40: {
            				}
            				break;
            				case (int)37: case (int)39: {
HXLINE(  61)					this->completionList->close();
            				}
            				break;
            				default:{
HXLINE(  67)					::String _hx_tmp2 = this->getPathBeforeDot(text);
HXDLIN(  67)					this->invokeCompletion(_hx_tmp2,(e->keyCode == (int)190));
HXLINE(  69)					if (this->completionList->get_visible()) {
HXLINE(  70)						 ::flixel::_hx_system::debug::completion::CompletionList _hx_tmp3 = this->completionList;
HXDLIN(  70)						_hx_tmp3->set_filter(this->getWordAfterDot(text));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,onKeyUp,(void))

void CompletionHandler_obj::invokeCompletion(::String path,bool isPeriod){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_75_invokeCompletion)
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompletionHandler_obj,invokeCompletion,(void))

::Array< ::String > CompletionHandler_obj::getGlobals(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_111_getGlobals)
HXDLIN( 111)		return ::Array_obj< ::String >::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getGlobals,return )

Float CompletionHandler_obj::getCharXPosition(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_116_getCharXPosition)
HXLINE( 117)		Float pos = ((Float)0.0);
HXLINE( 118)		{
HXLINE( 118)			int _g1 = (int)0;
HXDLIN( 118)			int _g = this->getCaretIndex();
HXDLIN( 118)			while((_g1 < _g)){
HXLINE( 118)				_g1 = (_g1 + (int)1);
HXDLIN( 118)				int i = (_g1 - (int)1);
HXLINE( 119)				pos = (pos + (int)6);
            			}
            		}
HXLINE( 120)		return pos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,getCharXPosition,return )

::String CompletionHandler_obj::getCompletedText(::String text,::String selectedItem){
            	HX_GC_STACKFRAME(&_hx_pos_d4c828664754b74a_126_getCompletedText)
HXDLIN( 126)		return  ::EReg_obj::__alloc( HX_CTX ,(this->getWordAfterDot(text) + HX_("$",24,00,00,00)),HX_("g",67,00,00,00))->replace(text,selectedItem);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CompletionHandler_obj,getCompletedText,return )

void CompletionHandler_obj::completed(::String selectedItem){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_130_completed)
HXLINE( 131)		::String textUntilCaret = this->getTextUntilCaret();
HXLINE( 132)		::String insert = this->getCompletedText(textUntilCaret,selectedItem);
HXLINE( 133)		 ::openfl::_legacy::text::TextField _hx_tmp = this->input;
HXDLIN( 133)		::String _hx_tmp1 = this->input->get_text();
HXDLIN( 133)		_hx_tmp->set_text((insert + _hx_tmp1.substr(this->getCaretIndex(),null())));
HXLINE( 134)		this->input->setSelection(insert.length,insert.length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,completed,(void))

void CompletionHandler_obj::selectionChanged(::String selectedItem){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_138_selectionChanged)
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,selectionChanged,(void))

void CompletionHandler_obj::completionClosed(){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_154_completionClosed)
HXLINE( 155)		if (!(this->watchingSelection)) {
HXLINE( 156)			return;
            		}
HXLINE( 158)		{
HXLINE( 158)			 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN( 158)			 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN( 158)			_hx_tmp->remove(HX_("Selection",2c,d8,ed,2f),::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(null()));
            		}
HXLINE( 159)		this->watchingSelection = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CompletionHandler_obj,completionClosed,(void))

::String CompletionHandler_obj::getPathBeforeDot(::String text){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_163_getPathBeforeDot)
HXLINE( 164)		::String lastWord = this->getLastWord(text);
HXLINE( 165)		int dotIndex = lastWord.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 166)		return lastWord.substr((int)0,dotIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getPathBeforeDot,return )

::String CompletionHandler_obj::getWordAfterDot(::String text){
            	HX_STACKFRAME(&_hx_pos_d4c828664754b74a_170_getWordAfterDot)
HXLINE( 171)		::String lastWord = this->getLastWord(text);
HXLINE( 173)		int index = lastWord.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 174)		if ((index < (int)0)) {
HXLINE( 175)			index = (int)0;
            		}
            		else {
HXLINE( 177)			index = (index + (int)1);
            		}
HXLINE( 179)		::String word = lastWord.substr(index,null());
HXLINE( 180)		if (hx::IsNull( word )) {
HXLINE( 180)			return HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 180)			return word;
            		}
HXDLIN( 180)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getWordAfterDot,return )

::String CompletionHandler_obj::getLastWord(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_d4c828664754b74a_185_getLastWord)
HXDLIN( 185)		return ( (::String)(::flixel::util::FlxArrayUtil_obj::last( ::EReg_obj::__alloc( HX_CTX ,HX_("([^.a-zA-Z0-9_\\[\\]\"']+)",90,0f,11,57),HX_("g",67,00,00,00))->split(text))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(CompletionHandler_obj,getLastWord,return )


hx::ObjectPtr< CompletionHandler_obj > CompletionHandler_obj::__new( ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::_legacy::text::TextField input) {
	hx::ObjectPtr< CompletionHandler_obj > __this = new CompletionHandler_obj();
	__this->__construct(completionList,input);
	return __this;
}

hx::ObjectPtr< CompletionHandler_obj > CompletionHandler_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::_hx_system::debug::completion::CompletionList completionList, ::openfl::_legacy::text::TextField input) {
	CompletionHandler_obj *__this = (CompletionHandler_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CompletionHandler_obj), true, "flixel.system.debug.completion.CompletionHandler"));
	*(void **)__this = CompletionHandler_obj::_hx_vtable;
	__this->__construct(completionList,input);
	return __this;
}

CompletionHandler_obj::CompletionHandler_obj()
{
}

void CompletionHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletionHandler);
	HX_MARK_MEMBER_NAME(completionList,"completionList");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(watchingSelection,"watchingSelection");
	HX_MARK_END_CLASS();
}

void CompletionHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(completionList,"completionList");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(watchingSelection,"watchingSelection");
}

hx::Val CompletionHandler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return hx::Val( onKeyUp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return hx::Val( completed_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getGlobals") ) { return hx::Val( getGlobals_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLastWord") ) { return hx::Val( getLastWord_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCaretIndex") ) { return hx::Val( getCaretIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { return hx::Val( completionList ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getWordAfterDot") ) { return hx::Val( getWordAfterDot_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invokeCompletion") ) { return hx::Val( invokeCompletion_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCharXPosition") ) { return hx::Val( getCharXPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCompletedText") ) { return hx::Val( getCompletedText_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectionChanged") ) { return hx::Val( selectionChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"completionClosed") ) { return hx::Val( completionClosed_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPathBeforeDot") ) { return hx::Val( getPathBeforeDot_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"watchingSelection") ) { return hx::Val( watchingSelection ); }
		if (HX_FIELD_EQ(inName,"getTextUntilCaret") ) { return hx::Val( getTextUntilCaret_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CompletionHandler_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast<  ::flixel::_hx_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"watchingSelection") ) { watchingSelection=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompletionHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("watchingSelection","\xd9","\xef","\xce","\x5e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CompletionHandler_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_hx_system::debug::completion::CompletionList*/ ,(int)offsetof(CompletionHandler_obj,completionList),HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(CompletionHandler_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsBool,(int)offsetof(CompletionHandler_obj,watchingSelection),HX_HCSTRING("watchingSelection","\xd9","\xef","\xce","\x5e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CompletionHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String CompletionHandler_obj_sMemberFields[] = {
	HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("watchingSelection","\xd9","\xef","\xce","\x5e"),
	HX_HCSTRING("getTextUntilCaret","\x48","\xae","\xe9","\xdc"),
	HX_HCSTRING("getCaretIndex","\xc5","\x12","\xce","\x39"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("invokeCompletion","\xb4","\x4c","\x06","\xfd"),
	HX_HCSTRING("getGlobals","\xba","\x8b","\x9a","\x63"),
	HX_HCSTRING("getCharXPosition","\x15","\x35","\x6e","\xb6"),
	HX_HCSTRING("getCompletedText","\x62","\x65","\x43","\x79"),
	HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f"),
	HX_HCSTRING("selectionChanged","\x08","\xc2","\xcb","\x3c"),
	HX_HCSTRING("completionClosed","\xe8","\x25","\x01","\x32"),
	HX_HCSTRING("getPathBeforeDot","\x6f","\x86","\xdc","\x27"),
	HX_HCSTRING("getWordAfterDot","\x6d","\x3b","\x96","\x86"),
	HX_HCSTRING("getLastWord","\xf6","\xdd","\x39","\x08"),
	::String(null()) };

static void CompletionHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompletionHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompletionHandler_obj::__mClass,"__mClass");
};

#endif

hx::Class CompletionHandler_obj::__mClass;

void CompletionHandler_obj::__register()
{
	hx::Object *dummy = new CompletionHandler_obj;
	CompletionHandler_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.completion.CompletionHandler","\xa4","\x7a","\x5b","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CompletionHandler_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CompletionHandler_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompletionHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CompletionHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompletionHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompletionHandler_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion
