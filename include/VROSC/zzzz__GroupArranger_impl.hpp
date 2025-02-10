#pragma once
// IWYU pragma private; include "VROSC/GroupArranger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__GroupArranger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "VROSC/zzzz__GroupArranger_def.hpp"
#include "VROSC/zzzz__LoopStationGroup_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
//  Writing Method size for method: ::VROSC::GroupArranger___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GroupArranger___c::*)()>(&::VROSC::GroupArranger___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18b0794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GroupArranger___c._ArrangeGroups_b__9_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::GroupArranger___c::*)(::VROSC::LoopStationGroup*)>(&::VROSC::GroupArranger___c::_ArrangeGroups_b__9_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18b079c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger___c*>::get(),
                        "<ArrangeGroups>b__9_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::GroupArranger___c::setStaticF___9(::VROSC::GroupArranger___c*  value)  {
::cordl_internals::setStaticField<::VROSC::GroupArranger___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger___c*>::get>(std::forward<::VROSC::GroupArranger___c*>(value));
}
inline ::VROSC::GroupArranger___c* VROSC::GroupArranger___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::GroupArranger___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger___c*>::get>();
}
inline void VROSC::GroupArranger___c::setStaticF___9__9_0(::System::Func_2<::UnityW<::VROSC::LoopStationGroup>,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::VROSC::LoopStationGroup>,int32_t>*, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger___c*>::get>(std::forward<::System::Func_2<::UnityW<::VROSC::LoopStationGroup>,int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::VROSC::LoopStationGroup>,int32_t>* VROSC::GroupArranger___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::VROSC::LoopStationGroup>,int32_t>*, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger___c*>::get>();
}
inline void VROSC::GroupArranger___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t VROSC::GroupArranger___c::_ArrangeGroups_b__9_0(::VROSC::LoopStationGroup*  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger___c*>::get(),
                        "<ArrangeGroups>b__9_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, i);
}
inline ::VROSC::GroupArranger___c* VROSC::GroupArranger___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GroupArranger___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::GroupArranger___c::GroupArranger___c()   {
}
//  Writing Method size for method: ::VROSC::GroupArranger.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GroupArranger::*)(::VROSC::LoopStation*, float_t)>(&::VROSC::GroupArranger::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18b007c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GroupArranger.ArrangeGroups
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GroupArranger::*)(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*, bool)>(&::VROSC::GroupArranger::ArrangeGroups)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x18b0088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger*>::get(),
                        "ArrangeGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GroupArranger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GroupArranger::*)()>(&::VROSC::GroupArranger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18b0730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::GroupArranger::__cordl_internal_get__sortArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortArea;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::GroupArranger::__cordl_internal_get__sortArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortArea;
}
constexpr void VROSC::GroupArranger::__cordl_internal_set__sortArea(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sortArea)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::GroupArranger::__cordl_internal_get__padding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padding;
}
constexpr float_t const& VROSC::GroupArranger::__cordl_internal_get__padding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padding;
}
constexpr void VROSC::GroupArranger::__cordl_internal_set__padding(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____padding = value;
}
constexpr float_t& VROSC::GroupArranger::__cordl_internal_get__keepGroupIfLargerThanPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keepGroupIfLargerThanPercent;
}
constexpr float_t const& VROSC::GroupArranger::__cordl_internal_get__keepGroupIfLargerThanPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keepGroupIfLargerThanPercent;
}
constexpr void VROSC::GroupArranger::__cordl_internal_set__keepGroupIfLargerThanPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keepGroupIfLargerThanPercent = value;
}
constexpr bool& VROSC::GroupArranger::__cordl_internal_get__rightToLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightToLeft;
}
constexpr bool const& VROSC::GroupArranger::__cordl_internal_get__rightToLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightToLeft;
}
constexpr void VROSC::GroupArranger::__cordl_internal_set__rightToLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightToLeft = value;
}
constexpr bool& VROSC::GroupArranger::__cordl_internal_get__bySize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bySize;
}
constexpr bool const& VROSC::GroupArranger::__cordl_internal_get__bySize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bySize;
}
constexpr void VROSC::GroupArranger::__cordl_internal_set__bySize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bySize = value;
}
constexpr int32_t& VROSC::GroupArranger::__cordl_internal_get__currentRowCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRowCount;
}
constexpr int32_t const& VROSC::GroupArranger::__cordl_internal_get__currentRowCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRowCount;
}
constexpr void VROSC::GroupArranger::__cordl_internal_set__currentRowCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRowCount = value;
}
constexpr float_t& VROSC::GroupArranger::__cordl_internal_get__groupWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupWidth;
}
constexpr float_t const& VROSC::GroupArranger::__cordl_internal_get__groupWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupWidth;
}
constexpr void VROSC::GroupArranger::__cordl_internal_set__groupWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupWidth = value;
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::GroupArranger::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::GroupArranger::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::GroupArranger::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::GroupArranger::Setup(::VROSC::LoopStation*  loopStation, float_t  groupWidth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation, groupWidth);
}
inline void VROSC::GroupArranger::ArrangeGroups(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  groups, bool  allowRowChange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger*>::get(),
                        "ArrangeGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groups, allowRowChange);
}
inline void VROSC::GroupArranger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GroupArranger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GroupArranger* VROSC::GroupArranger::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GroupArranger*>());
}
// Ctor Parameters []
constexpr ::VROSC::GroupArranger::GroupArranger()   {
}
