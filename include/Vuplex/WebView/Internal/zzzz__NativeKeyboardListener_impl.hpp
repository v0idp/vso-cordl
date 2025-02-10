#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/NativeKeyboardListener.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Vuplex/WebView/zzzz__KeyModifier_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__NativeKeyboardListener_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__KeyboardEventArgs_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__NativeKeyboardListener_def.hpp"
#include "Vuplex/WebView/zzzz__EventArgs_1_def.hpp"
#include "Vuplex/WebView/zzzz__KeyModifier_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c0674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr ::StringW const& Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::__cordl_internal_set_Key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::__cordl_internal_get_HasRepeated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasRepeated;
}
constexpr bool const& Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::__cordl_internal_get_HasRepeated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasRepeated;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::__cordl_internal_set_HasRepeated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasRepeated = value;
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState* Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState::NativeKeyboardListener_KeyRepeatState()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener___c::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17c1418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener___c.__cctor_b__44_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::NativeKeyboardListener___c::*)(::StringW)>(&::Vuplex::WebView::Internal::NativeKeyboardListener___c::__cctor_b__44_0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x17c1420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>::get(),
                        "<.cctor>b__44_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener___c.__cctor_b__44_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::Vuplex::WebView::Internal::NativeKeyboardListener___c::*)(::StringW)>(&::Vuplex::WebView::Internal::NativeKeyboardListener___c::__cctor_b__44_1)> {
  constexpr static std::size_t size = 0x95c;
  constexpr static std::size_t addrs = 0x17c1570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>::get(),
                        "<.cctor>b__44_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::Internal::NativeKeyboardListener___c::setStaticF___9(::Vuplex::WebView::Internal::NativeKeyboardListener___c*  value)  {
::cordl_internals::setStaticField<::Vuplex::WebView::Internal::NativeKeyboardListener___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>::get>(std::forward<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>(value));
}
inline ::Vuplex::WebView::Internal::NativeKeyboardListener___c* Vuplex::WebView::Internal::NativeKeyboardListener___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Vuplex::WebView::Internal::NativeKeyboardListener___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>::get>();
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::Internal::NativeKeyboardListener___c::__cctor_b__44_0(::StringW  javaScriptKeyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>::get(),
                        "<.cctor>b__44_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, javaScriptKeyName);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> Vuplex::WebView::Internal::NativeKeyboardListener___c::__cctor_b__44_1(::StringW  javaScriptKeyValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>::get(),
                        "<.cctor>b__44_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(this, ___internal_method, javaScriptKeyValue);
}
inline ::Vuplex::WebView::Internal::NativeKeyboardListener___c* Vuplex::WebView::Internal::NativeKeyboardListener___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::NativeKeyboardListener___c*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::NativeKeyboardListener___c::NativeKeyboardListener___c()   {
}
template<typename TArg,typename TReturn>
constexpr ::System::Collections::Generic::Dictionary_2<TArg,TReturn>*& Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::__cordl_internal_get_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cache;
}
template<typename TArg,typename TReturn>
constexpr ::System::Collections::Generic::Dictionary_2<TArg,TReturn>* const& Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::__cordl_internal_get_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cache;
}
template<typename TArg,typename TReturn>
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::__cordl_internal_set_cache(::System::Collections::Generic::Dictionary_2<TArg,TReturn>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___cache, value);
}
template<typename TArg,typename TReturn>
constexpr ::System::Func_2<TArg,TReturn>*& Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::__cordl_internal_get_function()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
template<typename TArg,typename TReturn>
constexpr ::System::Func_2<TArg,TReturn>* const& Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::__cordl_internal_get_function() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
template<typename TArg,typename TReturn>
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::__cordl_internal_set_function(::System::Func_2<TArg,TReturn>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___function, value);
}
template<typename TArg,typename TReturn>
inline void Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TArg,typename TReturn>
inline TReturn Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::__memoize_b__0(TArg  arg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>*>::get(),
                        "<_memoize>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TReturn, false>(this, ___internal_method, arg);
}
template<typename TArg,typename TReturn>
inline ::Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>* Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>*>());
}
// Ctor Parameters []
template<typename TArg,typename TReturn>
constexpr ::Vuplex::WebView::Internal::NativeKeyboardListener___c__DisplayClass31_0_2<TArg,TReturn>::NativeKeyboardListener___c__DisplayClass31_0_2()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.add_ImeCompositionCancelled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::add_ImeCompositionCancelled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17bd874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_ImeCompositionCancelled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.remove_ImeCompositionCancelled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::remove_ImeCompositionCancelled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17bec78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_ImeCompositionCancelled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.add_ImeCompositionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::add_ImeCompositionChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17bd910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_ImeCompositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.remove_ImeCompositionChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::remove_ImeCompositionChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17bed14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_ImeCompositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.add_ImeCompositionFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::add_ImeCompositionFinished)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17bd9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_ImeCompositionFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.remove_ImeCompositionFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::remove_ImeCompositionFinished)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17bedc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_ImeCompositionFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.add_KeyDownReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::add_KeyDownReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17bda70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_KeyDownReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.remove_KeyDownReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::remove_KeyDownReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17bee74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_KeyDownReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.add_KeyUpReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::add_KeyUpReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17bdb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_KeyUpReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.remove_KeyUpReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*)>(&::Vuplex::WebView::Internal::NativeKeyboardListener::remove_KeyUpReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x17bef24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_KeyUpReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.Instantiate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener> (*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::Instantiate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17bd7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._areKeysUndetectableThroughInputStringPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_areKeysUndetectableThroughInputStringPressed)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x17befd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_areKeysUndetectableThroughInputStringPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17bf108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._enableImeIfNeeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_enableImeIfNeeded)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17bf10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_enableImeIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._checkIfImeShouldBeEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Tuple_2<bool,::StringW>* (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_checkIfImeShouldBeEnabled)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17bf17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_checkIfImeShouldBeEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._getModifiers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Vuplex::WebView::KeyModifier (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_getModifiers)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x17bf250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_getModifiers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.OnGUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::OnGUI)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x17bf31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "OnGUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._processInputString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_processInputString)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x17bf450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processInputString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._processIme
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_processIme)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x17bf790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processIme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._processKeysPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_processKeysPressed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17bfa64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processKeysPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._processKeysReleased
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_processKeysReleased)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x17c01f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processKeysReleased",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._processKeysUndetectableThroughInputString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_processKeysUndetectableThroughInputString)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x17bfac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processKeysUndetectableThroughInputString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._processModifierKeysOnly
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_processModifierKeysOnly)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x17bfd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processModifierKeysOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._repeatKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_repeatKey)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x17c067c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_repeatKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::Update)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x17c07b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::NativeKeyboardListener._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::NativeKeyboardListener::*)()>(&::Vuplex::WebView::Internal::NativeKeyboardListener::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x17c07ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::EventHandler*& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_ImeCompositionCancelled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImeCompositionCancelled;
}
constexpr ::System::EventHandler* const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_ImeCompositionCancelled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImeCompositionCancelled;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set_ImeCompositionCancelled(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ImeCompositionCancelled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_ImeCompositionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImeCompositionChanged;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_ImeCompositionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImeCompositionChanged;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set_ImeCompositionChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ImeCompositionChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_ImeCompositionFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImeCompositionFinished;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_ImeCompositionFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImeCompositionFinished;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set_ImeCompositionFinished(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ImeCompositionFinished)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_KeyDownReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyDownReceived;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>* const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_KeyDownReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyDownReceived;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set_KeyDownReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyDownReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_KeyUpReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyUpReceived;
}
constexpr ::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>* const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get_KeyUpReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyUpReceived;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set_KeyUpReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyUpReceived)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::RegularExpressions::Regex*& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__alphanumericRegex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphanumericRegex;
}
constexpr ::System::Text::RegularExpressions::Regex* const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__alphanumericRegex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphanumericRegex;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set__alphanumericRegex(::System::Text::RegularExpressions::Regex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alphanumericRegex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__keysDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keysDown;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__keysDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keysDown;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set__keysDown(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keysDown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__keyRepeatState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyRepeatState;
}
constexpr ::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState* const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__keyRepeatState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyRepeatState;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set__keyRepeatState(::Vuplex::WebView::Internal::NativeKeyboardListener_KeyRepeatState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyRepeatState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__legacyInputManagerDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legacyInputManagerDisabled;
}
constexpr bool const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__legacyInputManagerDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____legacyInputManagerDisabled;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set__legacyInputManagerDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____legacyInputManagerDisabled = value;
}
constexpr ::Vuplex::WebView::KeyModifier& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__modifiersDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modifiersDown;
}
constexpr ::Vuplex::WebView::KeyModifier const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__modifiersDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modifiersDown;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set__modifiersDown(::Vuplex::WebView::KeyModifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modifiersDown = value;
}
constexpr ::StringW& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__previousImeCompositionString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousImeCompositionString;
}
constexpr ::StringW const& Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_get__previousImeCompositionString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousImeCompositionString;
}
constexpr void Vuplex::WebView::Internal::NativeKeyboardListener::__cordl_internal_set__previousImeCompositionString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previousImeCompositionString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::setStaticF__hasValidUnityKeyName(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "_hasValidUnityKeyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* Vuplex::WebView::Internal::NativeKeyboardListener::getStaticF__hasValidUnityKeyName()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "_hasValidUnityKeyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get>();
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::setStaticF__keyValuesUndetectableThroughInputString(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_keyValuesUndetectableThroughInputString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> Vuplex::WebView::Internal::NativeKeyboardListener::getStaticF__keyValuesUndetectableThroughInputString()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_keyValuesUndetectableThroughInputString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get>();
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::setStaticF__keyValues(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_keyValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> Vuplex::WebView::Internal::NativeKeyboardListener::getStaticF__keyValues()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_keyValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get>();
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::setStaticF__getPotentialUnityKeyNames(::System::Func_2<::StringW,::ArrayW<::StringW,::Array<::StringW>*>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::ArrayW<::StringW,::Array<::StringW>*>>*, "_getPotentialUnityKeyNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get>(std::forward<::System::Func_2<::StringW,::ArrayW<::StringW,::Array<::StringW>*>>*>(value));
}
inline ::System::Func_2<::StringW,::ArrayW<::StringW,::Array<::StringW>*>>* Vuplex::WebView::Internal::NativeKeyboardListener::getStaticF__getPotentialUnityKeyNames()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::ArrayW<::StringW,::Array<::StringW>*>>*, "_getPotentialUnityKeyNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get>();
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::add_ImeCompositionCancelled(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_ImeCompositionCancelled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::remove_ImeCompositionCancelled(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_ImeCompositionCancelled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::add_ImeCompositionChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_ImeCompositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::remove_ImeCompositionChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_ImeCompositionChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::add_ImeCompositionFinished(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_ImeCompositionFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::remove_ImeCompositionFinished(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_ImeCompositionFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::add_KeyDownReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_KeyDownReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::remove_KeyDownReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_KeyDownReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::add_KeyUpReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "add_KeyUpReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::remove_KeyUpReceived(::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "remove_KeyUpReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::Vuplex::WebView::Internal::KeyboardEventArgs*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener> Vuplex::WebView::Internal::NativeKeyboardListener::Instantiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "Instantiate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener>, false>(nullptr, ___internal_method);
}
inline bool Vuplex::WebView::Internal::NativeKeyboardListener::_areKeysUndetectableThroughInputStringPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_areKeysUndetectableThroughInputStringPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::_enableImeIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_enableImeIfNeeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Tuple_2<bool,::StringW>* Vuplex::WebView::Internal::NativeKeyboardListener::_checkIfImeShouldBeEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_checkIfImeShouldBeEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<bool,::StringW>*, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::KeyModifier Vuplex::WebView::Internal::NativeKeyboardListener::_getModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_getModifiers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Vuplex::WebView::KeyModifier, false>(this, ___internal_method);
}
template<typename TArg,typename TReturn>
inline ::System::Func_2<TArg,TReturn>* Vuplex::WebView::Internal::NativeKeyboardListener::_memoize(::System::Func_2<TArg,TReturn>*  function)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                    "_memoize",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TReturn>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TArg,TReturn>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TReturn>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Func_2<TArg,TReturn>*, false>(nullptr, ___internal_method, function);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "OnGUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::Internal::NativeKeyboardListener::_processInputString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processInputString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::Internal::NativeKeyboardListener::_processIme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processIme",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::_processKeysPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processKeysPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::_processKeysReleased()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processKeysReleased",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::Internal::NativeKeyboardListener::_processKeysUndetectableThroughInputString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processKeysUndetectableThroughInputString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::_processModifierKeysOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_processModifierKeysOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::_repeatKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "_repeatKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::NativeKeyboardListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::NativeKeyboardListener*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::NativeKeyboardListener* Vuplex::WebView::Internal::NativeKeyboardListener::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::NativeKeyboardListener*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::NativeKeyboardListener::NativeKeyboardListener()   {
}
