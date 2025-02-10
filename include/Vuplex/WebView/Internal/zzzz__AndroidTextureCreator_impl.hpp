#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidTextureCreator.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__AndroidTextureCreator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__AndroidTextureCreator_def.hpp"
// Ctor Parameters [CppParam { name: "_cordl_ID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Callback", ty: "::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation::AndroidTextureCreator_TextureCreatorInvocation(int32_t  _cordl_ID, int32_t  Width, int32_t  Height, ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*  Callback) noexcept  {
this->_cordl_ID = _cordl_ID;
this->Width = Width;
this->Height = Height;
this->Callback = Callback;
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation::AndroidTextureCreator_TextureCreatorInvocation()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e6f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0._HandleTextureCreated_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::*)(::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation)>(&::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::_HandleTextureCreated_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x16e70f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0*>::get(),
                        "<HandleTextureCreated>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::__cordl_internal_get_invocationID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invocationID;
}
constexpr int32_t const& Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::__cordl_internal_get_invocationID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invocationID;
}
constexpr void Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::__cordl_internal_set_invocationID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invocationID = value;
}
inline void Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::_HandleTextureCreated_b__0(::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0*>::get(),
                        "<HandleTextureCreated>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
inline ::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0* Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::AndroidTextureCreator___c__DisplayClass10_0::AndroidTextureCreator___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::*)(int32_t)>(&::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x16e6d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16e7108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x16e710c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e72f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x16e72f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16e7330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>& Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator> const& Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::__cordl_internal_set___4__this(::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9* Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::AndroidTextureCreator___callPluginOncePerFrame_d__9::AndroidTextureCreator___callPluginOncePerFrame_d__9()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator> (*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator::get_Instance)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x16e68ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator.CreateTexture
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* (::Vuplex::WebView::Internal::AndroidTextureCreator::*)(int32_t, int32_t)>(&::Vuplex::WebView::Internal::AndroidTextureCreator::CreateTexture)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x16e69e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "CreateTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator._callPluginOncePerFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Vuplex::WebView::Internal::AndroidTextureCreator::*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator::_callPluginOncePerFrame)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16e6cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "_callPluginOncePerFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator.HandleTextureCreated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidTextureCreator::*)(::StringW)>(&::Vuplex::WebView::Internal::AndroidTextureCreator::HandleTextureCreated)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x16e6d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "HandleTextureCreated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidTextureCreator::*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16e6f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator.WebView_getCreateTextureFunction
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator::WebView_getCreateTextureFunction)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x16e6f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "WebView_getCreateTextureFunction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Vuplex::WebView::Internal::AndroidTextureCreator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::AndroidTextureCreator::*)()>(&::Vuplex::WebView::Internal::AndroidTextureCreator::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x16e7004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_get__invocationIDsToTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invocationIDsToTrigger;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_get__invocationIDsToTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invocationIDsToTrigger;
}
constexpr void Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_set__invocationIDsToTrigger(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____invocationIDsToTrigger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_get__nextInvocationID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextInvocationID;
}
constexpr int32_t const& Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_get__nextInvocationID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextInvocationID;
}
constexpr void Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_set__nextInvocationID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextInvocationID = value;
}
constexpr ::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>*& Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_get__pendingInvocations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingInvocations;
}
constexpr ::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>* const& Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_get__pendingInvocations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingInvocations;
}
constexpr void Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_set__pendingInvocations(::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::AndroidTextureCreator_TextureCreatorInvocation>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingInvocations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::WaitForEndOfFrame*& Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_get__waitForEndOfFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitForEndOfFrame;
}
constexpr ::UnityEngine::WaitForEndOfFrame* const& Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_get__waitForEndOfFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitForEndOfFrame;
}
constexpr void Vuplex::WebView::Internal::AndroidTextureCreator::__cordl_internal_set__waitForEndOfFrame(::UnityEngine::WaitForEndOfFrame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____waitForEndOfFrame)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::AndroidTextureCreator::setStaticF__instance(::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>  value)  {
::cordl_internals::setStaticField<::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get>(std::forward<::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>>(value));
}
inline ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator> Vuplex::WebView::Internal::AndroidTextureCreator::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get>();
}
inline ::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator> Vuplex::WebView::Internal::AndroidTextureCreator::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Vuplex::WebView::Internal::AndroidTextureCreator>, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* Vuplex::WebView::Internal::AndroidTextureCreator::CreateTexture(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "CreateTexture",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>*, false>(this, ___internal_method, width, height);
}
inline ::System::Collections::IEnumerator* Vuplex::WebView::Internal::AndroidTextureCreator::_callPluginOncePerFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "_callPluginOncePerFrame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void Vuplex::WebView::Internal::AndroidTextureCreator::HandleTextureCreated(::StringW  parameterString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "HandleTextureCreated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterString);
}
inline void Vuplex::WebView::Internal::AndroidTextureCreator::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IntPtr Vuplex::WebView::Internal::AndroidTextureCreator::WebView_getCreateTextureFunction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        "WebView_getCreateTextureFunction",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline void Vuplex::WebView::Internal::AndroidTextureCreator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::AndroidTextureCreator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Vuplex::WebView::Internal::AndroidTextureCreator* Vuplex::WebView::Internal::AndroidTextureCreator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::AndroidTextureCreator*>());
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::AndroidTextureCreator::AndroidTextureCreator()   {
}
