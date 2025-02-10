#pragma once
// IWYU pragma private; include "VROSC/TransformAnchor.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__TransformAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__AnchorState_def.hpp"
#include "VROSC/zzzz__TransformAnchor_def.hpp"
//  Writing Method size for method: ::VROSC::TransformAnchor___c__DisplayClass15_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor___c__DisplayClass15_0::*)()>(&::VROSC::TransformAnchor___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172b4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor___c__DisplayClass15_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor___c__DisplayClass15_0._Save_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor___c__DisplayClass15_0::*)(::GlobalNamespace::OVRSpatialAnchor*, bool)>(&::VROSC::TransformAnchor___c__DisplayClass15_0::_Save_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x172b4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor___c__DisplayClass15_0*>::get(),
                        "<Save>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<bool>*& VROSC::TransformAnchor___c__DisplayClass15_0::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action_1<bool>* const& VROSC::TransformAnchor___c__DisplayClass15_0::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void VROSC::TransformAnchor___c__DisplayClass15_0::__cordl_internal_set_onComplete(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::TransformAnchor___c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor___c__DisplayClass15_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TransformAnchor___c__DisplayClass15_0::_Save_b__0(::GlobalNamespace::OVRSpatialAnchor*  anchor, bool  success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor___c__DisplayClass15_0*>::get(),
                        "<Save>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor, success);
}
inline ::VROSC::TransformAnchor___c__DisplayClass15_0* VROSC::TransformAnchor___c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TransformAnchor___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::TransformAnchor___c__DisplayClass15_0::TransformAnchor___c__DisplayClass15_0()   {
}
//  Writing Method size for method: ::VROSC::TransformAnchor__Init_d__10._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor__Init_d__10::*)(int32_t)>(&::VROSC::TransformAnchor__Init_d__10::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x172b428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__Init_d__10.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor__Init_d__10::*)()>(&::VROSC::TransformAnchor__Init_d__10::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x172b520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__Init_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TransformAnchor__Init_d__10::*)()>(&::VROSC::TransformAnchor__Init_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x172b524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__Init_d__10.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::TransformAnchor__Init_d__10::*)()>(&::VROSC::TransformAnchor__Init_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172b76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__Init_d__10.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor__Init_d__10::*)()>(&::VROSC::TransformAnchor__Init_d__10::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x172b774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__Init_d__10.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::TransformAnchor__Init_d__10::*)()>(&::VROSC::TransformAnchor__Init_d__10::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172b7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::TransformAnchor__Init_d__10::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::TransformAnchor__Init_d__10::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TransformAnchor>& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::TransformAnchor> const& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::TransformAnchor__Init_d__10::__cordl_internal_set___4__this(::UnityW<::VROSC::TransformAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action_1<bool>* const& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void VROSC::TransformAnchor__Init_d__10::__cordl_internal_set_onComplete(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get__timer_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer_5__2;
}
constexpr float_t const& VROSC::TransformAnchor__Init_d__10::__cordl_internal_get__timer_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timer_5__2;
}
constexpr void VROSC::TransformAnchor__Init_d__10::__cordl_internal_set__timer_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timer_5__2 = value;
}
inline void VROSC::TransformAnchor__Init_d__10::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::TransformAnchor__Init_d__10::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::TransformAnchor__Init_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::TransformAnchor__Init_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::TransformAnchor__Init_d__10::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::TransformAnchor__Init_d__10::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__Init_d__10*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::TransformAnchor__Init_d__10* VROSC::TransformAnchor__Init_d__10::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TransformAnchor__Init_d__10*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::TransformAnchor__Init_d__10::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::TransformAnchor__Init_d__10::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::TransformAnchor__Init_d__10::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::TransformAnchor__Init_d__10::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::TransformAnchor__Init_d__10::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::TransformAnchor__Init_d__10::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::TransformAnchor__Init_d__10::TransformAnchor__Init_d__10()   {
}
//  Writing Method size for method: ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::*)(int32_t)>(&::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x172b4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::*)()>(&::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x172b7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::*)()>(&::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x172b7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::*)()>(&::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172bbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::*)()>(&::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x172bbfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::*)()>(&::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172bc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::AnchorState*>*& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get_anchorStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorStates;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::AnchorState*>* const& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get_anchorStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorStates;
}
constexpr void VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_set_anchorStates(::System::Collections::Generic::List_1<::VROSC::AnchorState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anchorStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TransformAnchor>& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::TransformAnchor> const& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_set___4__this(::UnityW<::VROSC::TransformAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_set_onComplete(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get__isCompleted_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCompleted_5__2;
}
constexpr bool const& VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_get__isCompleted_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCompleted_5__2;
}
constexpr void VROSC::TransformAnchor__WaitForNearestAnchor_d__14::__cordl_internal_set__isCompleted_5__2(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCompleted_5__2 = value;
}
inline void VROSC::TransformAnchor__WaitForNearestAnchor_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::TransformAnchor__WaitForNearestAnchor_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::TransformAnchor__WaitForNearestAnchor_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::TransformAnchor__WaitForNearestAnchor_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::TransformAnchor__WaitForNearestAnchor_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::TransformAnchor__WaitForNearestAnchor_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14* VROSC::TransformAnchor__WaitForNearestAnchor_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TransformAnchor__WaitForNearestAnchor_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::TransformAnchor__WaitForNearestAnchor_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::TransformAnchor__WaitForNearestAnchor_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::TransformAnchor__WaitForNearestAnchor_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::TransformAnchor__WaitForNearestAnchor_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::TransformAnchor__WaitForNearestAnchor_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::TransformAnchor__WaitForNearestAnchor_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::TransformAnchor__WaitForNearestAnchor_d__14::TransformAnchor__WaitForNearestAnchor_d__14()   {
}
//  Writing Method size for method: ::VROSC::TransformAnchor.get_Uuid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::VROSC::TransformAnchor::*)()>(&::VROSC::TransformAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x172b404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "get_Uuid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor.set_Uuid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor::*)(::System::Guid)>(&::VROSC::TransformAnchor::set_Uuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172b410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "set_Uuid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor.get_SpaceHandle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::VROSC::TransformAnchor::*)()>(&::VROSC::TransformAnchor::get_SpaceHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172b418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "get_SpaceHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor.set_SpaceHandle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor::*)(uint64_t)>(&::VROSC::TransformAnchor::set_SpaceHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172b420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "set_SpaceHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::TransformAnchor::*)(::System::Action_1<bool>*)>(&::VROSC::TransformAnchor::Init)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1729cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor.Cleanup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor::*)()>(&::VROSC::TransformAnchor::Cleanup)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x172a81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "Cleanup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor.EraseData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor::*)()>(&::VROSC::TransformAnchor::EraseData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1729c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "EraseData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor.FindNearestAnchor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor::*)(::System::Collections::Generic::List_1<::VROSC::AnchorState*>*, ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*)>(&::VROSC::TransformAnchor::FindNearestAnchor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x172b194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "FindNearestAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::AnchorState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor.WaitForNearestAnchor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::TransformAnchor::*)(::System::Collections::Generic::List_1<::VROSC::AnchorState*>*, ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*)>(&::VROSC::TransformAnchor::WaitForNearestAnchor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x172b450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "WaitForNearestAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::AnchorState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor.Save
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor::*)(::System::Action_1<bool>*)>(&::VROSC::TransformAnchor::Save)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x172a6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "Save",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TransformAnchor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TransformAnchor::*)()>(&::VROSC::TransformAnchor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172b4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor>& VROSC::TransformAnchor::__cordl_internal_get__spatialAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialAnchor;
}
constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor> const& VROSC::TransformAnchor::__cordl_internal_get__spatialAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialAnchor;
}
constexpr void VROSC::TransformAnchor::__cordl_internal_set__spatialAnchor(::UnityW<::GlobalNamespace::OVRSpatialAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spatialAnchor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Guid& VROSC::TransformAnchor::__cordl_internal_get__Uuid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Uuid_k__BackingField;
}
constexpr ::System::Guid const& VROSC::TransformAnchor::__cordl_internal_get__Uuid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Uuid_k__BackingField;
}
constexpr void VROSC::TransformAnchor::__cordl_internal_set__Uuid_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Uuid_k__BackingField = value;
}
constexpr uint64_t& VROSC::TransformAnchor::__cordl_internal_get__SpaceHandle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpaceHandle_k__BackingField;
}
constexpr uint64_t const& VROSC::TransformAnchor::__cordl_internal_get__SpaceHandle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpaceHandle_k__BackingField;
}
constexpr void VROSC::TransformAnchor::__cordl_internal_set__SpaceHandle_k__BackingField(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpaceHandle_k__BackingField = value;
}
inline ::System::Guid VROSC::TransformAnchor::get_Uuid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "get_Uuid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline void VROSC::TransformAnchor::set_Uuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "set_Uuid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint64_t VROSC::TransformAnchor::get_SpaceHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "get_SpaceHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void VROSC::TransformAnchor::set_SpaceHandle(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "set_SpaceHandle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* VROSC::TransformAnchor::Init(::System::Action_1<bool>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, onComplete);
}
inline void VROSC::TransformAnchor::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "Cleanup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TransformAnchor::EraseData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "EraseData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TransformAnchor::FindNearestAnchor(::System::Collections::Generic::List_1<::VROSC::AnchorState*>*  anchorStates, ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "FindNearestAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::AnchorState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorStates, onComplete);
}
inline ::System::Collections::IEnumerator* VROSC::TransformAnchor::WaitForNearestAnchor(::System::Collections::Generic::List_1<::VROSC::AnchorState*>*  anchorStates, ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "WaitForNearestAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::AnchorState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Quaternion>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, anchorStates, onComplete);
}
inline void VROSC::TransformAnchor::Save(::System::Action_1<bool>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        "Save",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onComplete);
}
inline void VROSC::TransformAnchor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TransformAnchor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TransformAnchor* VROSC::TransformAnchor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TransformAnchor*>());
}
// Ctor Parameters []
constexpr ::VROSC::TransformAnchor::TransformAnchor()   {
}
