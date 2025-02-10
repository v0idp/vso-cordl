#pragma once
// IWYU pragma private; include "VROSC/LoopStationLoopHandler.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopStationLoopHandler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
#include "VROSC/zzzz__LoopStationDataController_def.hpp"
#include "VROSC/zzzz__LoopStationGroup_def.hpp"
#include "VROSC/zzzz__LoopStationLoopHandler_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopStationLoopHandler_LooperState::LoopStationLoopHandler_LooperState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationLoopHandler_LooperState::LoopStationLoopHandler_LooperState()   {
}
constexpr ::VROSC::LoopStationLoopHandler_LooperState  VROSC::LoopStationLoopHandler_LooperState::NoLoops{static_cast<int32_t>(0x0)};
constexpr ::VROSC::LoopStationLoopHandler_LooperState  VROSC::LoopStationLoopHandler_LooperState::GotLoops{static_cast<int32_t>(0x1)};
constexpr ::VROSC::LoopStationLoopHandler_LooperState  VROSC::LoopStationLoopHandler_LooperState::IsAtMaxNumber{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler___c__DisplayClass26_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler___c__DisplayClass26_0::*)()>(&::VROSC::LoopStationLoopHandler___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18be56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass26_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler___c__DisplayClass26_0._CopyLoop_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler___c__DisplayClass26_0::*)(::VROSC::LoopPlayer*)>(&::VROSC::LoopStationLoopHandler___c__DisplayClass26_0::_CopyLoop_b__0)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18be7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass26_0*>::get(),
                        "<CopyLoop>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& VROSC::LoopStationLoopHandler___c__DisplayClass26_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& VROSC::LoopStationLoopHandler___c__DisplayClass26_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass26_0::__cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationLoopHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopStationLoopHandler___c__DisplayClass26_0::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopStationLoopHandler___c__DisplayClass26_0::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass26_0::__cordl_internal_set_source(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationLoopHandler___c__DisplayClass26_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass26_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationLoopHandler___c__DisplayClass26_0::_CopyLoop_b__0(::VROSC::LoopPlayer*  loopPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass26_0*>::get(),
                        "<CopyLoop>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopPlayer);
}
inline ::VROSC::LoopStationLoopHandler___c__DisplayClass26_0* VROSC::LoopStationLoopHandler___c__DisplayClass26_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationLoopHandler___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass26_0::LoopStationLoopHandler___c__DisplayClass26_0()   {
}
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler___c__DisplayClass27_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler___c__DisplayClass27_0::*)()>(&::VROSC::LoopStationLoopHandler___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18be574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass27_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler___c__DisplayClass27_0._CreateLoop_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler___c__DisplayClass27_0::*)()>(&::VROSC::LoopStationLoopHandler___c__DisplayClass27_0::_CreateLoop_b__0)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x18be928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass27_0*>::get(),
                        "<CreateLoop>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& VROSC::LoopStationLoopHandler___c__DisplayClass27_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& VROSC::LoopStationLoopHandler___c__DisplayClass27_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass27_0::__cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationLoopHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopStationLoopHandler___c__DisplayClass27_0::__cordl_internal_get_newLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newLoop;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopStationLoopHandler___c__DisplayClass27_0::__cordl_internal_get_newLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newLoop;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass27_0::__cordl_internal_set_newLoop(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newLoop)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*& VROSC::LoopStationLoopHandler___c__DisplayClass27_0::__cordl_internal_get_onLoopCreatedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLoopCreatedCallback;
}
constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>* const& VROSC::LoopStationLoopHandler___c__DisplayClass27_0::__cordl_internal_get_onLoopCreatedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onLoopCreatedCallback;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass27_0::__cordl_internal_set_onLoopCreatedCallback(::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onLoopCreatedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationLoopHandler___c__DisplayClass27_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass27_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationLoopHandler___c__DisplayClass27_0::_CreateLoop_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass27_0*>::get(),
                        "<CreateLoop>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationLoopHandler___c__DisplayClass27_0* VROSC::LoopStationLoopHandler___c__DisplayClass27_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationLoopHandler___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass27_0::LoopStationLoopHandler___c__DisplayClass27_0()   {
}
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler___c__DisplayClass29_0::*)()>(&::VROSC::LoopStationLoopHandler___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bea6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::LoopStationDataController*& VROSC::LoopStationLoopHandler___c__DisplayClass29_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::VROSC::LoopStationDataController* const& VROSC::LoopStationLoopHandler___c__DisplayClass29_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass29_0::__cordl_internal_set_data(::VROSC::LoopStationDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& VROSC::LoopStationLoopHandler___c__DisplayClass29_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& VROSC::LoopStationLoopHandler___c__DisplayClass29_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass29_0::__cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationLoopHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::LoopStationLoopHandler___c__DisplayClass29_0::__cordl_internal_get_loadedLoops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadedLoops;
}
constexpr int32_t const& VROSC::LoopStationLoopHandler___c__DisplayClass29_0::__cordl_internal_get_loadedLoops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadedLoops;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass29_0::__cordl_internal_set_loadedLoops(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadedLoops = value;
}
inline void VROSC::LoopStationLoopHandler___c__DisplayClass29_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0* VROSC::LoopStationLoopHandler___c__DisplayClass29_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0::LoopStationLoopHandler___c__DisplayClass29_0()   {
}
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler___c__DisplayClass29_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler___c__DisplayClass29_1::*)()>(&::VROSC::LoopStationLoopHandler___c__DisplayClass29_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bea74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass29_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler___c__DisplayClass29_1._LoadLoopsFlow_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler___c__DisplayClass29_1::*)(::VROSC::LoopPlayer*)>(&::VROSC::LoopStationLoopHandler___c__DisplayClass29_1::_LoadLoopsFlow_b__0)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x18bea7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass29_1*>::get(),
                        "<LoadLoopsFlow>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::LoopStationLoopHandler___c__DisplayClass29_1::__cordl_internal_get_trackId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackId;
}
constexpr ::StringW const& VROSC::LoopStationLoopHandler___c__DisplayClass29_1::__cordl_internal_get_trackId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackId;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass29_1::__cordl_internal_set_trackId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::LoopStationLoopHandler___c__DisplayClass29_1::__cordl_internal_get_groupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr ::StringW const& VROSC::LoopStationLoopHandler___c__DisplayClass29_1::__cordl_internal_get_groupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass29_1::__cordl_internal_set_groupId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*& VROSC::LoopStationLoopHandler___c__DisplayClass29_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0* const& VROSC::LoopStationLoopHandler___c__DisplayClass29_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void VROSC::LoopStationLoopHandler___c__DisplayClass29_1::__cordl_internal_set_CS$__8__locals1(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationLoopHandler___c__DisplayClass29_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass29_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationLoopHandler___c__DisplayClass29_1::_LoadLoopsFlow_b__0(::VROSC::LoopPlayer*  loopPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler___c__DisplayClass29_1*>::get(),
                        "<LoadLoopsFlow>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopPlayer);
}
inline ::VROSC::LoopStationLoopHandler___c__DisplayClass29_1* VROSC::LoopStationLoopHandler___c__DisplayClass29_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationLoopHandler___c__DisplayClass29_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_1::LoopStationLoopHandler___c__DisplayClass29_1()   {
}
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::*)(int32_t)>(&::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18be5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::*)()>(&::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18bec64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::*)()>(&::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x18bec68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::*)()>(&::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bf044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::*)()>(&::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18bf04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::*)()>(&::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bf084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationDataController*& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::VROSC::LoopStationDataController* const& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_set_data(::VROSC::LoopStationDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationLoopHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::VROSC::LoopStationLoopHandler___c__DisplayClass29_0* const& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_set___8__1(::VROSC::LoopStationLoopHandler___c__DisplayClass29_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action* const& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_set_callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get__trackIds_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackIds_5__2;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_get__trackIds_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackIds_5__2;
}
constexpr void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::__cordl_internal_set__trackIds_5__2(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackIds_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29* VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationLoopHandler__LoadLoopsFlow_d__29::LoopStationLoopHandler__LoadLoopsFlow_d__29()   {
}
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.get_ActiveLoops
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::get_ActiveLoops)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18be394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "get_ActiveLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.get_LoopCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::get_LoopCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x18b3100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "get_LoopCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.get_IsMaxLoopsReached
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::get_IsMaxLoopsReached)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x18b6ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "get_IsMaxLoopsReached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.get_IsCopying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::get_IsCopying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18be39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "get_IsCopying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.set_IsCopying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)(bool)>(&::VROSC::LoopStationLoopHandler::set_IsCopying)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18be3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "set_IsCopying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)(::VROSC::LoopStation*)>(&::VROSC::LoopStationLoopHandler::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18be3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::OnEnable)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x18be3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.PlayAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::PlayAll)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18ae7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "PlayAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.StopAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::StopAll)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18aeabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "StopAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.IsEmpty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::IsEmpty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18be51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "IsEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.GetState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopStationLoopHandler_LooperState (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::GetState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x18accc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "GetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.GetIsAnyLoopGrabbed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::GetIsAnyLoopGrabbed)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x18b1f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "GetIsAnyLoopGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.CopyLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)(::VROSC::LoopPlayer*)>(&::VROSC::LoopStationLoopHandler::CopyLoop)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x18be048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "CopyLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.CreateLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)(::StringW, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, ::VROSC::LoopStationGroup*, ::UnityEngine::Color, bool, bool, ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*)>(&::VROSC::LoopStationLoopHandler::CreateLoop)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18ba758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "CreateLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.LoadLoops
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)(::VROSC::LoopStationDataController*, ::System::Action*)>(&::VROSC::LoopStationLoopHandler::LoadLoops)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18affb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "LoadLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationDataController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.LoadLoopsFlow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::LoopStationLoopHandler::*)(::VROSC::LoopStationDataController*, ::System::Action*)>(&::VROSC::LoopStationLoopHandler::LoadLoopsFlow)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x18be57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "LoadLoopsFlow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationDataController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.RemoveLoop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)(::VROSC::LoopPlayer*, bool)>(&::VROSC::LoopStationLoopHandler::RemoveLoop)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x18be618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "RemoveLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.RemoveAllLoops
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::RemoveAllLoops)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x18ae6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "RemoveAllLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.OnDeleteOperationCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::OnDeleteOperationCompleted)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x18be6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "OnDeleteOperationCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler.GetLoopByID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopPlayer> (::VROSC::LoopStationLoopHandler::*)(::StringW)>(&::VROSC::LoopStationLoopHandler::GetLoopByID)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x18af7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "GetLoopByID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationLoopHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationLoopHandler::*)()>(&::VROSC::LoopStationLoopHandler::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x18be77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopStationLoopHandler::__cordl_internal_get__loopPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPrefab;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopStationLoopHandler::__cordl_internal_get__loopPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPrefab;
}
constexpr void VROSC::LoopStationLoopHandler::__cordl_internal_set__loopPrefab(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::LoopStationLoopHandler::__cordl_internal_get__loopLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::LoopStationLoopHandler::__cordl_internal_get__loopLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopLocation;
}
constexpr void VROSC::LoopStationLoopHandler::__cordl_internal_set__loopLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopLocation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*& VROSC::LoopStationLoopHandler::__cordl_internal_get__activeLoops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeLoops;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* const& VROSC::LoopStationLoopHandler::__cordl_internal_get__activeLoops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeLoops;
}
constexpr void VROSC::LoopStationLoopHandler::__cordl_internal_set__activeLoops(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeLoops)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopStationLoopHandler::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopStationLoopHandler::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::LoopStationLoopHandler::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopStationLoopHandler::__cordl_internal_get__IsCopying_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCopying_k__BackingField;
}
constexpr bool const& VROSC::LoopStationLoopHandler::__cordl_internal_get__IsCopying_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCopying_k__BackingField;
}
constexpr void VROSC::LoopStationLoopHandler::__cordl_internal_set__IsCopying_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsCopying_k__BackingField = value;
}
constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*& VROSC::LoopStationLoopHandler::__cordl_internal_get_OnLoopDeleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoopDeleted;
}
constexpr ::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>* const& VROSC::LoopStationLoopHandler::__cordl_internal_get_OnLoopDeleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoopDeleted;
}
constexpr void VROSC::LoopStationLoopHandler::__cordl_internal_set_OnLoopDeleted(::System::Action_2<::UnityW<::VROSC::LoopPlayer>,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLoopDeleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*& VROSC::LoopStationLoopHandler::__cordl_internal_get_OnLoopCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoopCreated;
}
constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>* const& VROSC::LoopStationLoopHandler::__cordl_internal_get_OnLoopCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoopCreated;
}
constexpr void VROSC::LoopStationLoopHandler::__cordl_internal_set_OnLoopCreated(::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLoopCreated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int32_t>*& VROSC::LoopStationLoopHandler::__cordl_internal_get_OnLoopAmountChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoopAmountChanged;
}
constexpr ::System::Action_1<int32_t>* const& VROSC::LoopStationLoopHandler::__cordl_internal_get_OnLoopAmountChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoopAmountChanged;
}
constexpr void VROSC::LoopStationLoopHandler::__cordl_internal_set_OnLoopAmountChanged(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLoopAmountChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* VROSC::LoopStationLoopHandler::get_ActiveLoops()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "get_ActiveLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*, false>(this, ___internal_method);
}
inline int32_t VROSC::LoopStationLoopHandler::get_LoopCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "get_LoopCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool VROSC::LoopStationLoopHandler::get_IsMaxLoopsReached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "get_IsMaxLoopsReached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::LoopStationLoopHandler::get_IsCopying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "get_IsCopying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::LoopStationLoopHandler::set_IsCopying(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "set_IsCopying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::LoopStationLoopHandler::Setup(::VROSC::LoopStation*  loopStation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation);
}
inline void VROSC::LoopStationLoopHandler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationLoopHandler::PlayAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "PlayAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationLoopHandler::StopAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "StopAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::LoopStationLoopHandler::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "IsEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationLoopHandler_LooperState VROSC::LoopStationLoopHandler::GetState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "GetState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopStationLoopHandler_LooperState, false>(this, ___internal_method);
}
inline bool VROSC::LoopStationLoopHandler::GetIsAnyLoopGrabbed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "GetIsAnyLoopGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::LoopStationLoopHandler::CopyLoop(::VROSC::LoopPlayer*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "CopyLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void VROSC::LoopStationLoopHandler::CreateLoop(::StringW  trackId, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::VROSC::LoopStationGroup*  group, ::UnityEngine::Color  color, bool  playImmediately, bool  overdub, ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  onLoopCreatedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "CreateLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackId, audioData, group, color, playImmediately, overdub, onLoopCreatedCallback);
}
inline void VROSC::LoopStationLoopHandler::LoadLoops(::VROSC::LoopStationDataController*  data, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "LoadLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationDataController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, callback);
}
inline ::System::Collections::IEnumerator* VROSC::LoopStationLoopHandler::LoadLoopsFlow(::VROSC::LoopStationDataController*  data, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "LoadLoopsFlow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationDataController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, data, callback);
}
inline void VROSC::LoopStationLoopHandler::RemoveLoop(::VROSC::LoopPlayer*  loopPlayer, bool  fromReset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "RemoveLoop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopPlayer, fromReset);
}
inline void VROSC::LoopStationLoopHandler::RemoveAllLoops()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "RemoveAllLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationLoopHandler::OnDeleteOperationCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "OnDeleteOperationCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::LoopPlayer> VROSC::LoopStationLoopHandler::GetLoopByID(::StringW  loopID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        "GetLoopByID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopPlayer>, false>(this, ___internal_method, loopID);
}
inline void VROSC::LoopStationLoopHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationLoopHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationLoopHandler* VROSC::LoopStationLoopHandler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationLoopHandler*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationLoopHandler::LoopStationLoopHandler()   {
}
