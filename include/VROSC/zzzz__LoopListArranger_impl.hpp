#pragma once
// IWYU pragma private; include "VROSC/LoopListArranger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopListArranger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__ILoopGroupListItem_def.hpp"
#include "VROSC/zzzz__LoopListArranger_def.hpp"
#include "VROSC/zzzz__LoopListPreviewItem_def.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
#include "VROSC/zzzz__LoopStationGroup_def.hpp"
//  Writing Method size for method: ::VROSC::LoopListArranger___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopListArranger___c::*)()>(&::VROSC::LoopListArranger___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18b4b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger___c._SortLoops_b__20_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopListArranger___c::*)(::VROSC::ILoopGroupListItem*, ::VROSC::ILoopGroupListItem*)>(&::VROSC::LoopListArranger___c::_SortLoops_b__20_0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18b4b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger___c*>::get(),
                        "<SortLoops>b__20_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ILoopGroupListItem*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ILoopGroupListItem*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::LoopListArranger___c::setStaticF___9(::VROSC::LoopListArranger___c*  value)  {
::cordl_internals::setStaticField<::VROSC::LoopListArranger___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger___c*>::get>(std::forward<::VROSC::LoopListArranger___c*>(value));
}
inline ::VROSC::LoopListArranger___c* VROSC::LoopListArranger___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::LoopListArranger___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger___c*>::get>();
}
inline void VROSC::LoopListArranger___c::setStaticF___9__20_0(::System::Comparison_1<::VROSC::ILoopGroupListItem*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::VROSC::ILoopGroupListItem*>*, "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger___c*>::get>(std::forward<::System::Comparison_1<::VROSC::ILoopGroupListItem*>*>(value));
}
inline ::System::Comparison_1<::VROSC::ILoopGroupListItem*>* VROSC::LoopListArranger___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::VROSC::ILoopGroupListItem*>*, "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger___c*>::get>();
}
inline void VROSC::LoopListArranger___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t VROSC::LoopListArranger___c::_SortLoops_b__20_0(::VROSC::ILoopGroupListItem*  a, ::VROSC::ILoopGroupListItem*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger___c*>::get(),
                        "<SortLoops>b__20_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ILoopGroupListItem*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ILoopGroupListItem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline ::VROSC::LoopListArranger___c* VROSC::LoopListArranger___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopListArranger___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopListArranger___c::LoopListArranger___c()   {
}
//  Writing Method size for method: ::VROSC::LoopListArranger.get_ListHeight
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopListArranger::*)()>(&::VROSC::LoopListArranger::get_ListHeight)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18b3f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "get_ListHeight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.get_OnlyAllowRearrangeOfLoops
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopListArranger::*)()>(&::VROSC::LoopListArranger::get_OnlyAllowRearrangeOfLoops)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18b3ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "get_OnlyAllowRearrangeOfLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopListArranger::*)(::VROSC::LoopStationGroup*, ::UnityEngine::Transform*)>(&::VROSC::LoopListArranger::Setup)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x18b4004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopListArranger::*)()>(&::VROSC::LoopListArranger::OnDestroy)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x18b41a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.SetHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopListArranger::*)(::VROSC::LoopPlayer*)>(&::VROSC::LoopListArranger::SetHovering)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18b42f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopListArranger::*)()>(&::VROSC::LoopListArranger::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18b43a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.LoopCountChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopListArranger::*)(::VROSC::LoopPlayer*)>(&::VROSC::LoopListArranger::LoopCountChanged)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x18b4708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "LoopCountChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.Changed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopListArranger::*)(bool)>(&::VROSC::LoopListArranger::Changed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18b4390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "Changed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.SortLoops
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopListArranger::*)()>(&::VROSC::LoopListArranger::SortLoops)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x18b43b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "SortLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.GetListHeight
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopListArranger::*)()>(&::VROSC::LoopListArranger::GetListHeight)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18b3f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "GetListHeight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.GetListIndexByPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopListArranger::*)(::VROSC::LoopPlayer*)>(&::VROSC::LoopListArranger::GetListIndexByPosition)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18b4824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "GetListIndexByPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger.GetLooperPositionByOrderInList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::LoopListArranger::*)(int32_t)>(&::VROSC::LoopListArranger::GetLooperPositionByOrderInList)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x18b49b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "GetLooperPositionByOrderInList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopListArranger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopListArranger::*)()>(&::VROSC::LoopListArranger::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x18b4a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::LoopListArranger::__cordl_internal_get__onlyAllowRearrangeOfLoops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onlyAllowRearrangeOfLoops;
}
constexpr bool const& VROSC::LoopListArranger::__cordl_internal_get__onlyAllowRearrangeOfLoops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onlyAllowRearrangeOfLoops;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set__onlyAllowRearrangeOfLoops(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onlyAllowRearrangeOfLoops = value;
}
constexpr float_t& VROSC::LoopListArranger::__cordl_internal_get__loopHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopHeightOffset;
}
constexpr float_t const& VROSC::LoopListArranger::__cordl_internal_get__loopHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopHeightOffset;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set__loopHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopHeightOffset = value;
}
constexpr ::UnityW<::VROSC::LoopListPreviewItem>& VROSC::LoopListArranger::__cordl_internal_get__dropPositionPreview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dropPositionPreview;
}
constexpr ::UnityW<::VROSC::LoopListPreviewItem> const& VROSC::LoopListArranger::__cordl_internal_get__dropPositionPreview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dropPositionPreview;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set__dropPositionPreview(::UnityW<::VROSC::LoopListPreviewItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dropPositionPreview)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::LoopListArranger::__cordl_internal_get__loopsParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopsParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::LoopListArranger::__cordl_internal_get__loopsParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopsParent;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set__loopsParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopsParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationGroup>& VROSC::LoopListArranger::__cordl_internal_get__owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____owner;
}
constexpr ::UnityW<::VROSC::LoopStationGroup> const& VROSC::LoopListArranger::__cordl_internal_get__owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____owner;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set__owner(::UnityW<::VROSC::LoopStationGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopListArranger::__cordl_internal_get__hoveringingPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringingPlayer;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopListArranger::__cordl_internal_get__hoveringingPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringingPlayer;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set__hoveringingPlayer(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoveringingPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ILoopGroupListItem*>*& VROSC::LoopListArranger::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ILoopGroupListItem*>* const& VROSC::LoopListArranger::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set__items(::System::Collections::Generic::List_1<::VROSC::ILoopGroupListItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopListArranger::__cordl_internal_get__sortNeeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortNeeded;
}
constexpr bool const& VROSC::LoopListArranger::__cordl_internal_get__sortNeeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortNeeded;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set__sortNeeded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sortNeeded = value;
}
constexpr bool& VROSC::LoopListArranger::__cordl_internal_get__dataShouldUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataShouldUpdate;
}
constexpr bool const& VROSC::LoopListArranger::__cordl_internal_get__dataShouldUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataShouldUpdate;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set__dataShouldUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataShouldUpdate = value;
}
constexpr ::System::Action*& VROSC::LoopListArranger::__cordl_internal_get_OnSortComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSortComplete;
}
constexpr ::System::Action* const& VROSC::LoopListArranger::__cordl_internal_get_OnSortComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSortComplete;
}
constexpr void VROSC::LoopListArranger::__cordl_internal_set_OnSortComplete(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnSortComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline float_t VROSC::LoopListArranger::get_ListHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "get_ListHeight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool VROSC::LoopListArranger::get_OnlyAllowRearrangeOfLoops()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "get_OnlyAllowRearrangeOfLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::LoopListArranger::Setup(::VROSC::LoopStationGroup*  loopStationGroup, ::UnityEngine::Transform*  loopsParent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStationGroup, loopsParent);
}
inline void VROSC::LoopListArranger::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopListArranger::SetHovering(::VROSC::LoopPlayer*  hoveringPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hoveringPlayer);
}
inline void VROSC::LoopListArranger::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopListArranger::LoopCountChanged(::VROSC::LoopPlayer*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "LoopCountChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
inline void VROSC::LoopListArranger::Changed(bool  alsoUpdateData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "Changed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alsoUpdateData);
}
inline void VROSC::LoopListArranger::SortLoops()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "SortLoops",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t VROSC::LoopListArranger::GetListHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "GetListHeight",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t VROSC::LoopListArranger::GetListIndexByPosition(::VROSC::LoopPlayer*  loopPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "GetListIndexByPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, loopPlayer);
}
inline ::UnityEngine::Vector3 VROSC::LoopListArranger::GetLooperPositionByOrderInList(int32_t  order)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        "GetLooperPositionByOrderInList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, order);
}
inline void VROSC::LoopListArranger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopListArranger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopListArranger* VROSC::LoopListArranger::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopListArranger*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopListArranger::LoopListArranger()   {
}
