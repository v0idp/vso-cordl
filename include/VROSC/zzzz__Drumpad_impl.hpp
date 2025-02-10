#pragma once
// IWYU pragma private; include "VROSC/Drumpad.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__IAnchoredObject_impl.hpp"
#include "VROSC/zzzz__Drumpad_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__DrumpadPlayer_def.hpp"
#include "VROSC/zzzz__DrumpadSpawner_def.hpp"
#include "VROSC/zzzz__DrumpadUI_def.hpp"
#include "VROSC/zzzz__Drumpad_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__GrabData_def.hpp"
#include "VROSC/zzzz__ModularDrumsController_def.hpp"
#include "VROSC/zzzz__TransformMover_def.hpp"
//  Writing Method size for method: ::VROSC::Drumpad___c__DisplayClass24_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad___c__DisplayClass24_0::*)()>(&::VROSC::Drumpad___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1709658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad___c__DisplayClass24_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad___c__DisplayClass24_0._Setup_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad___c__DisplayClass24_0::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::VROSC::Drumpad___c__DisplayClass24_0::_Setup_b__0)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x170a19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad___c__DisplayClass24_0*>::get(),
                        "<Setup>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad___c__DisplayClass24_0._Setup_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad___c__DisplayClass24_0::*)(::VROSC::Error)>(&::VROSC::Drumpad___c__DisplayClass24_0::_Setup_b__1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x170a2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad___c__DisplayClass24_0*>::get(),
                        "<Setup>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::Drumpad>& VROSC::Drumpad___c__DisplayClass24_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::Drumpad> const& VROSC::Drumpad___c__DisplayClass24_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::Drumpad___c__DisplayClass24_0::__cordl_internal_set___4__this(::UnityW<::VROSC::Drumpad>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::Drumpad___c__DisplayClass24_0::__cordl_internal_get_empadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___empadId;
}
constexpr int32_t const& VROSC::Drumpad___c__DisplayClass24_0::__cordl_internal_get_empadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___empadId;
}
constexpr void VROSC::Drumpad___c__DisplayClass24_0::__cordl_internal_set_empadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___empadId = value;
}
inline void VROSC::Drumpad___c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad___c__DisplayClass24_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Drumpad___c__DisplayClass24_0::_Setup_b__0(bool  success, ::UnityEngine::Vector3  anchorPosition, ::UnityEngine::Quaternion  anchorRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad___c__DisplayClass24_0*>::get(),
                        "<Setup>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, anchorPosition, anchorRotation);
}
inline void VROSC::Drumpad___c__DisplayClass24_0::_Setup_b__1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad___c__DisplayClass24_0*>::get(),
                        "<Setup>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::Drumpad___c__DisplayClass24_0* VROSC::Drumpad___c__DisplayClass24_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Drumpad___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::Drumpad___c__DisplayClass24_0::Drumpad___c__DisplayClass24_0()   {
}
//  Writing Method size for method: ::VROSC::Drumpad__Fade_d__38._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad__Fade_d__38::*)(int32_t)>(&::VROSC::Drumpad__Fade_d__38::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x170a108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Fade_d__38.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad__Fade_d__38::*)()>(&::VROSC::Drumpad__Fade_d__38::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x170a384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Fade_d__38.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Drumpad__Fade_d__38::*)()>(&::VROSC::Drumpad__Fade_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x170a388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Fade_d__38.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::Drumpad__Fade_d__38::*)()>(&::VROSC::Drumpad__Fade_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170a494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Fade_d__38.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad__Fade_d__38::*)()>(&::VROSC::Drumpad__Fade_d__38::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x170a49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Fade_d__38.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::Drumpad__Fade_d__38::*)()>(&::VROSC::Drumpad__Fade_d__38::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170a4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::Drumpad__Fade_d__38::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::Drumpad__Fade_d__38::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::Drumpad__Fade_d__38::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::Drumpad__Fade_d__38::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::Drumpad__Fade_d__38::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::Drumpad__Fade_d__38::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::Drumpad>& VROSC::Drumpad__Fade_d__38::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::Drumpad> const& VROSC::Drumpad__Fade_d__38::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::Drumpad__Fade_d__38::__cordl_internal_set___4__this(::UnityW<::VROSC::Drumpad>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::Drumpad__Fade_d__38::__cordl_internal_get__progression_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progression_5__2;
}
constexpr float_t const& VROSC::Drumpad__Fade_d__38::__cordl_internal_get__progression_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progression_5__2;
}
constexpr void VROSC::Drumpad__Fade_d__38::__cordl_internal_set__progression_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progression_5__2 = value;
}
constexpr float_t& VROSC::Drumpad__Fade_d__38::__cordl_internal_get__time_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_5__3;
}
constexpr float_t const& VROSC::Drumpad__Fade_d__38::__cordl_internal_get__time_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_5__3;
}
constexpr void VROSC::Drumpad__Fade_d__38::__cordl_internal_set__time_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time_5__3 = value;
}
constexpr ::UnityEngine::Color& VROSC::Drumpad__Fade_d__38::__cordl_internal_get__startColor_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startColor_5__4;
}
constexpr ::UnityEngine::Color const& VROSC::Drumpad__Fade_d__38::__cordl_internal_get__startColor_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startColor_5__4;
}
constexpr void VROSC::Drumpad__Fade_d__38::__cordl_internal_set__startColor_5__4(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startColor_5__4 = value;
}
constexpr ::UnityEngine::Color& VROSC::Drumpad__Fade_d__38::__cordl_internal_get__targetColor_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetColor_5__5;
}
constexpr ::UnityEngine::Color const& VROSC::Drumpad__Fade_d__38::__cordl_internal_get__targetColor_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetColor_5__5;
}
constexpr void VROSC::Drumpad__Fade_d__38::__cordl_internal_set__targetColor_5__5(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetColor_5__5 = value;
}
inline void VROSC::Drumpad__Fade_d__38::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::Drumpad__Fade_d__38::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::Drumpad__Fade_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::Drumpad__Fade_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::Drumpad__Fade_d__38::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::Drumpad__Fade_d__38::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Fade_d__38*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::Drumpad__Fade_d__38* VROSC::Drumpad__Fade_d__38::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Drumpad__Fade_d__38*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::Drumpad__Fade_d__38::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::Drumpad__Fade_d__38::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::Drumpad__Fade_d__38::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::Drumpad__Fade_d__38::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::Drumpad__Fade_d__38::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::Drumpad__Fade_d__38::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::Drumpad__Fade_d__38::Drumpad__Fade_d__38()   {
}
//  Writing Method size for method: ::VROSC::Drumpad__Timer_d__37._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad__Timer_d__37::*)(int32_t)>(&::VROSC::Drumpad__Timer_d__37::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x170a080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Timer_d__37.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad__Timer_d__37::*)()>(&::VROSC::Drumpad__Timer_d__37::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x170a4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Timer_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Drumpad__Timer_d__37::*)()>(&::VROSC::Drumpad__Timer_d__37::MoveNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x170a4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Timer_d__37.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::Drumpad__Timer_d__37::*)()>(&::VROSC::Drumpad__Timer_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170a5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Timer_d__37.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad__Timer_d__37::*)()>(&::VROSC::Drumpad__Timer_d__37::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x170a5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad__Timer_d__37.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::Drumpad__Timer_d__37::*)()>(&::VROSC::Drumpad__Timer_d__37::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170a5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::Drumpad__Timer_d__37::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::Drumpad__Timer_d__37::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::Drumpad__Timer_d__37::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::Drumpad__Timer_d__37::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::Drumpad__Timer_d__37::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::Drumpad__Timer_d__37::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::Drumpad>& VROSC::Drumpad__Timer_d__37::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::Drumpad> const& VROSC::Drumpad__Timer_d__37::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::Drumpad__Timer_d__37::__cordl_internal_set___4__this(::UnityW<::VROSC::Drumpad>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::Drumpad__Timer_d__37::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::Drumpad__Timer_d__37::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::Drumpad__Timer_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::Drumpad__Timer_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::Drumpad__Timer_d__37::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::Drumpad__Timer_d__37::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad__Timer_d__37*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::Drumpad__Timer_d__37* VROSC::Drumpad__Timer_d__37::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Drumpad__Timer_d__37*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::Drumpad__Timer_d__37::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::Drumpad__Timer_d__37::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::Drumpad__Timer_d__37::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::Drumpad__Timer_d__37::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::Drumpad__Timer_d__37::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::Drumpad__Timer_d__37::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::Drumpad__Timer_d__37::Drumpad__Timer_d__37()   {
}
//  Writing Method size for method: ::VROSC::Drumpad.get_DrumpadSpawner
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::DrumpadSpawner> (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::get_DrumpadSpawner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "get_DrumpadSpawner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.get_DrumpadPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::DrumpadPlayer> (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::get_DrumpadPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "get_DrumpadPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.get_TransformMover
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::TransformMover> (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::get_TransformMover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1708a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "get_TransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::Awake)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1708a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::OnDestroy)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x1708e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(::VROSC::DrumpadSpawner*, int32_t, ::UnityEngine::Transform*, ::VROSC::ModularDrumsController*)>(&::VROSC::Drumpad::Setup)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x1709244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DrumpadSpawner*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ModularDrumsController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.ShowHint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::ShowHint)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x17099e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "ShowHint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(bool)>(&::VROSC::Drumpad::SetActive)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x170993c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.Grab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(::VROSC::GrabData*, bool)>(&::VROSC::Drumpad::Grab)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1709a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Grab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::GrabData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.GrabEnded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(::VROSC::TransformMover*)>(&::VROSC::Drumpad::GrabEnded)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1709aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "GrabEnded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformMover*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.SetDrumSampleOrNoteNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(int32_t, bool)>(&::VROSC::Drumpad::SetDrumSampleOrNoteNumber)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x170980c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetDrumSampleOrNoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.Delete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::Delete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1709d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.Delete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(bool)>(&::VROSC::Drumpad::Delete)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1709e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.AddSpatialAnchorToData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(::StringW)>(&::VROSC::Drumpad::AddSpatialAnchorToData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1709efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "AddSpatialAnchorToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.RemoveSpatialAnchorFromData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(::StringW)>(&::VROSC::Drumpad::RemoveSpatialAnchorFromData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1709f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "RemoveSpatialAnchorFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.SetDrumUseVelocity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(bool)>(&::VROSC::Drumpad::SetDrumUseVelocity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1709f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetDrumUseVelocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.SetPitch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(int32_t)>(&::VROSC::Drumpad::SetPitch)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1709fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetPitch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.SetVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)(float_t)>(&::VROSC::Drumpad::SetVolume)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x170a030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.Timer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::Timer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1709a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Timer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad.Fade
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::Fade)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x170a0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Fade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Drumpad._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Drumpad::*)()>(&::VROSC::Drumpad::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x170a130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::TransformMover>& VROSC::Drumpad::__cordl_internal_get__mover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mover;
}
constexpr ::UnityW<::VROSC::TransformMover> const& VROSC::Drumpad::__cordl_internal_get__mover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mover;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__mover(::UnityW<::VROSC::TransformMover>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::DrumpadPlayer>& VROSC::Drumpad::__cordl_internal_get__player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr ::UnityW<::VROSC::DrumpadPlayer> const& VROSC::Drumpad::__cordl_internal_get__player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____player;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__player(::UnityW<::VROSC::DrumpadPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____player)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::DrumpadUI>& VROSC::Drumpad::__cordl_internal_get__UI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UI;
}
constexpr ::UnityW<::VROSC::DrumpadUI> const& VROSC::Drumpad::__cordl_internal_get__UI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UI;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__UI(::UnityW<::VROSC::DrumpadUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& VROSC::Drumpad::__cordl_internal_get__playableDirector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& VROSC::Drumpad::__cordl_internal_get__playableDirector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playableDirector;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__playableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playableDirector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& VROSC::Drumpad::__cordl_internal_get__enterTimeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterTimeline;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& VROSC::Drumpad::__cordl_internal_get__enterTimeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enterTimeline;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__enterTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enterTimeline)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& VROSC::Drumpad::__cordl_internal_get__exitTimeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitTimeline;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& VROSC::Drumpad::__cordl_internal_get__exitTimeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitTimeline;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__exitTimeline(::UnityW<::UnityEngine::Playables::PlayableAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exitTimeline)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::Drumpad::__cordl_internal_get__hintText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::Drumpad::__cordl_internal_get__hintText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintText;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__hintText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hintText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::Drumpad::__cordl_internal_get__untilFadeTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____untilFadeTimer;
}
constexpr float_t const& VROSC::Drumpad::__cordl_internal_get__untilFadeTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____untilFadeTimer;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__untilFadeTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____untilFadeTimer = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>& VROSC::Drumpad::__cordl_internal_get__overlaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlaps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> const& VROSC::Drumpad::__cordl_internal_get__overlaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlaps;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__overlaps(::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overlaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::DrumpadSpawner>& VROSC::Drumpad::__cordl_internal_get__overlappingSpawner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlappingSpawner;
}
constexpr ::UnityW<::VROSC::DrumpadSpawner> const& VROSC::Drumpad::__cordl_internal_get__overlappingSpawner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlappingSpawner;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__overlappingSpawner(::UnityW<::VROSC::DrumpadSpawner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overlappingSpawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::Drumpad::__cordl_internal_get__spawnerDeleteDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnerDeleteDistance;
}
constexpr float_t const& VROSC::Drumpad::__cordl_internal_get__spawnerDeleteDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnerDeleteDistance;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__spawnerDeleteDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnerDeleteDistance = value;
}
constexpr ::UnityW<::VROSC::DrumpadSpawner>& VROSC::Drumpad::__cordl_internal_get__drumpadSpawner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumpadSpawner;
}
constexpr ::UnityW<::VROSC::DrumpadSpawner> const& VROSC::Drumpad::__cordl_internal_get__drumpadSpawner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumpadSpawner;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__drumpadSpawner(::UnityW<::VROSC::DrumpadSpawner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____drumpadSpawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::Drumpad::__cordl_internal_get__empadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____empadId;
}
constexpr int32_t const& VROSC::Drumpad::__cordl_internal_get__empadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____empadId;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__empadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____empadId = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::Drumpad::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::Drumpad::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__parent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ModularDrumsController>& VROSC::Drumpad::__cordl_internal_get__instrumentController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentController;
}
constexpr ::UnityW<::VROSC::ModularDrumsController> const& VROSC::Drumpad::__cordl_internal_get__instrumentController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentController;
}
constexpr void VROSC::Drumpad::__cordl_internal_set__instrumentController(::UnityW<::VROSC::ModularDrumsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrumentController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::VROSC::Drumpad>>*& VROSC::Drumpad::__cordl_internal_get_OnRemoveDrumpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRemoveDrumpad;
}
constexpr ::System::Action_1<::UnityW<::VROSC::Drumpad>>* const& VROSC::Drumpad::__cordl_internal_get_OnRemoveDrumpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRemoveDrumpad;
}
constexpr void VROSC::Drumpad::__cordl_internal_set_OnRemoveDrumpad(::System::Action_1<::UnityW<::VROSC::Drumpad>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnRemoveDrumpad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::VROSC::DrumpadSpawner> VROSC::Drumpad::get_DrumpadSpawner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "get_DrumpadSpawner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::DrumpadSpawner>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::DrumpadPlayer> VROSC::Drumpad::get_DrumpadPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "get_DrumpadPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::DrumpadPlayer>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::TransformMover> VROSC::Drumpad::get_TransformMover()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "get_TransformMover",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::TransformMover>, false>(this, ___internal_method);
}
inline void VROSC::Drumpad::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Drumpad::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Drumpad::Setup(::VROSC::DrumpadSpawner*  drumpadSpawner, int32_t  empadId, ::UnityEngine::Transform*  parent, ::VROSC::ModularDrumsController*  instrumentController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::DrumpadSpawner*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ModularDrumsController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, drumpadSpawner, empadId, parent, instrumentController);
}
inline void VROSC::Drumpad::ShowHint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "ShowHint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Drumpad::SetActive(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isActive);
}
inline void VROSC::Drumpad::Grab(::VROSC::GrabData*  grabData, bool  grabbing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Grab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::GrabData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabData, grabbing);
}
inline void VROSC::Drumpad::GrabEnded(::VROSC::TransformMover*  mover)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "GrabEnded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TransformMover*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mover);
}
inline void VROSC::Drumpad::SetDrumSampleOrNoteNumber(int32_t  sampleIdOrNoteNumber, bool  preview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetDrumSampleOrNoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleIdOrNoteNumber, preview);
}
inline void VROSC::Drumpad::Delete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Drumpad::Delete(bool  removeFromController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Delete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removeFromController);
}
inline void VROSC::Drumpad::AddSpatialAnchorToData(::StringW  anchorUuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "AddSpatialAnchorToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}
inline void VROSC::Drumpad::RemoveSpatialAnchorFromData(::StringW  anchorUuid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "RemoveSpatialAnchorFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchorUuid);
}
inline void VROSC::Drumpad::SetDrumUseVelocity(bool  useVelocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetDrumUseVelocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useVelocity);
}
inline void VROSC::Drumpad::SetPitch(int32_t  pitch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetPitch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pitch);
}
inline void VROSC::Drumpad::SetVolume(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline ::System::Collections::IEnumerator* VROSC::Drumpad::Timer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Timer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* VROSC::Drumpad::Fade()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        "Fade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void VROSC::Drumpad::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Drumpad*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Drumpad* VROSC::Drumpad::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Drumpad*>());
}
/// @brief Convert operator to "::VROSC::IAnchoredObject"
constexpr  VROSC::Drumpad::operator ::VROSC::IAnchoredObject*() noexcept {
return static_cast<::VROSC::IAnchoredObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IAnchoredObject"
constexpr ::VROSC::IAnchoredObject* VROSC::Drumpad::i___VROSC__IAnchoredObject() noexcept {
return static_cast<::VROSC::IAnchoredObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::Drumpad::Drumpad()   {
}
