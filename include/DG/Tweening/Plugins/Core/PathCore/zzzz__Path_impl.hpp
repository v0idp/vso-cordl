#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/PathCore/Path.hpp"
#include "DG/Tweening/zzzz__PathType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__Path_def.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__ABSPathDecoder_def.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__CatmullRomDecoder_def.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__ControlPoint_def.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__CubicBezierDecoder_def.hpp"
#include "DG/Tweening/Plugins/Core/PathCore/zzzz__LinearDecoder_def.hpp"
#include "DG/Tweening/zzzz__AxisConstraint_def.hpp"
#include "DG/Tweening/zzzz__PathType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::Path::*)(::DG::Tweening::PathType, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, int32_t, ::System::Nullable_1<::UnityEngine::Color>)>(&::DG::Tweening::Plugins::Core::PathCore::Path::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x18e2a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::Path::*)()>(&::DG::Tweening::Plugins::Core::PathCore::Path::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18e2e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.FinalizePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::Path::*)(bool, ::DG::Tweening::AxisConstraint, ::UnityEngine::Vector3)>(&::DG::Tweening::Plugins::Core::PathCore::Path::FinalizePath)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x18d8b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "FinalizePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::AxisConstraint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.GetPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::DG::Tweening::Plugins::Core::PathCore::Path::*)(float_t, bool)>(&::DG::Tweening::Plugins::Core::PathCore::Path::GetPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18d9420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "GetPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.ConvertToConstantPathPerc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::DG::Tweening::Plugins::Core::PathCore::Path::*)(float_t)>(&::DG::Tweening::Plugins::Core::PathCore::Path::ConvertToConstantPathPerc)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x18d9314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "ConvertToConstantPathPerc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.GetWaypointIndexFromPerc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::DG::Tweening::Plugins::Core::PathCore::Path::*)(float_t, bool)>(&::DG::Tweening::Plugins::Core::PathCore::Path::GetWaypointIndexFromPerc)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x18d9d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "GetWaypointIndexFromPerc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.GetDrawPoints
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> (*)(::DG::Tweening::Plugins::Core::PathCore::Path*, int32_t)>(&::DG::Tweening::Plugins::Core::PathCore::Path::GetDrawPoints)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18e2eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "GetDrawPoints",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.RefreshNonLinearDrawWps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Plugins::Core::PathCore::Path*)>(&::DG::Tweening::Plugins::Core::PathCore::Path::RefreshNonLinearDrawWps)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x18e2f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "RefreshNonLinearDrawWps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.Destroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::Path::*)()>(&::DG::Tweening::Plugins::Core::PathCore::Path::Destroy)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x18d8564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "Destroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.CloneIncremental
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Plugins::Core::PathCore::Path* (::DG::Tweening::Plugins::Core::PathCore::Path::*)(int32_t)>(&::DG::Tweening::Plugins::Core::PathCore::Path::CloneIncremental)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x18d8eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "CloneIncremental",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.AssignWaypoints
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::Path::*)(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, bool)>(&::DG::Tweening::Plugins::Core::PathCore::Path::AssignWaypoints)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18e2c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "AssignWaypoints",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.AssignDecoder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::Path::*)(::DG::Tweening::PathType)>(&::DG::Tweening::Plugins::Core::PathCore::Path::AssignDecoder)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x18e2d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "AssignDecoder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.Draw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Core::PathCore::Path::*)()>(&::DG::Tweening::Plugins::Core::PathCore::Path::Draw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18e308c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "Draw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::Plugins::Core::PathCore::Path.Draw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Plugins::Core::PathCore::Path*)>(&::DG::Tweening::Plugins::Core::PathCore::Path::Draw)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x18e3090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "Draw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t,::Array<float_t>*>& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_wpLengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wpLengths;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_wpLengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wpLengths;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_wpLengths(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wpLengths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::DG::Tweening::PathType& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::DG::Tweening::PathType const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_type(::DG::Tweening::PathType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr int32_t& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_subdivisionsXSegment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisionsXSegment;
}
constexpr int32_t const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_subdivisionsXSegment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisionsXSegment;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_subdivisionsXSegment(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subdivisionsXSegment = value;
}
constexpr int32_t& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_subdivisions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisions;
}
constexpr int32_t const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_subdivisions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subdivisions;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_subdivisions(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subdivisions = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_wps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wps;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_wps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wps;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_wps(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_controlPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoints;
}
constexpr ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*> const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_controlPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPoints;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_controlPoints(::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint,::Array<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controlPoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr float_t const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_length(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___length = value;
}
constexpr bool& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_isFinalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFinalized;
}
constexpr bool const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_isFinalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFinalized;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_isFinalized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFinalized = value;
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_timesTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timesTable;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_timesTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timesTable;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_timesTable(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___timesTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_lengthsTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lengthsTable;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_lengthsTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lengthsTable;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_lengthsTable(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lengthsTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_linearWPIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearWPIndex;
}
constexpr int32_t const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_linearWPIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearWPIndex;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_linearWPIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linearWPIndex = value;
}
constexpr bool& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_addedExtraStartWp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addedExtraStartWp;
}
constexpr bool const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_addedExtraStartWp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addedExtraStartWp;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_addedExtraStartWp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addedExtraStartWp = value;
}
constexpr bool& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_addedExtraEndWp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addedExtraEndWp;
}
constexpr bool const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_addedExtraEndWp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addedExtraEndWp;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_addedExtraEndWp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addedExtraEndWp = value;
}
constexpr ::DG::Tweening::Plugins::Core::PathCore::Path*& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get__incrementalClone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incrementalClone;
}
constexpr ::DG::Tweening::Plugins::Core::PathCore::Path* const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get__incrementalClone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incrementalClone;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set__incrementalClone(::DG::Tweening::Plugins::Core::PathCore::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____incrementalClone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get__incrementalIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incrementalIndex;
}
constexpr int32_t const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get__incrementalIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____incrementalIndex;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set__incrementalIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____incrementalIndex = value;
}
constexpr ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder* const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set__decoder(::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____decoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get__changed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changed;
}
constexpr bool const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get__changed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changed;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set__changed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changed = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_nonLinearDrawWps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonLinearDrawWps;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_nonLinearDrawWps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nonLinearDrawWps;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_nonLinearDrawWps(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nonLinearDrawWps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr ::UnityEngine::Vector3 const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPosition = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_lookAtPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtPosition;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_lookAtPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtPosition;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_lookAtPosition(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookAtPosition = value;
}
constexpr ::UnityEngine::Color& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_gizmoColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor;
}
constexpr ::UnityEngine::Color const& DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_get_gizmoColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor;
}
constexpr void DG::Tweening::Plugins::Core::PathCore::Path::__cordl_internal_set_gizmoColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoColor = value;
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::setStaticF__catmullRomDecoder(::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder*  value)  {
::cordl_internals::setStaticField<::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder*, "_catmullRomDecoder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get>(std::forward<::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder*>(value));
}
inline ::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder* DG::Tweening::Plugins::Core::PathCore::Path::getStaticF__catmullRomDecoder()  {
return ::cordl_internals::getStaticField<::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder*, "_catmullRomDecoder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get>();
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::setStaticF__linearDecoder(::DG::Tweening::Plugins::Core::PathCore::LinearDecoder*  value)  {
::cordl_internals::setStaticField<::DG::Tweening::Plugins::Core::PathCore::LinearDecoder*, "_linearDecoder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get>(std::forward<::DG::Tweening::Plugins::Core::PathCore::LinearDecoder*>(value));
}
inline ::DG::Tweening::Plugins::Core::PathCore::LinearDecoder* DG::Tweening::Plugins::Core::PathCore::Path::getStaticF__linearDecoder()  {
return ::cordl_internals::getStaticField<::DG::Tweening::Plugins::Core::PathCore::LinearDecoder*, "_linearDecoder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get>();
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::setStaticF__cubicBezierDecoder(::DG::Tweening::Plugins::Core::PathCore::CubicBezierDecoder*  value)  {
::cordl_internals::setStaticField<::DG::Tweening::Plugins::Core::PathCore::CubicBezierDecoder*, "_cubicBezierDecoder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get>(std::forward<::DG::Tweening::Plugins::Core::PathCore::CubicBezierDecoder*>(value));
}
inline ::DG::Tweening::Plugins::Core::PathCore::CubicBezierDecoder* DG::Tweening::Plugins::Core::PathCore::Path::getStaticF__cubicBezierDecoder()  {
return ::cordl_internals::getStaticField<::DG::Tweening::Plugins::Core::PathCore::CubicBezierDecoder*, "_cubicBezierDecoder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get>();
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::_ctor(::DG::Tweening::PathType  type, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  waypoints, int32_t  subdivisionsXSegment, ::System::Nullable_1<::UnityEngine::Color>  gizmoColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::Color>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, waypoints, subdivisionsXSegment, gizmoColor);
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::FinalizePath(bool  isClosedPath, ::DG::Tweening::AxisConstraint  lockPositionAxes, ::UnityEngine::Vector3  currTargetVal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "FinalizePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::AxisConstraint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isClosedPath, lockPositionAxes, currTargetVal);
}
inline ::UnityEngine::Vector3 DG::Tweening::Plugins::Core::PathCore::Path::GetPoint(float_t  perc, bool  convertToConstantPerc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "GetPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, perc, convertToConstantPerc);
}
inline float_t DG::Tweening::Plugins::Core::PathCore::Path::ConvertToConstantPathPerc(float_t  perc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "ConvertToConstantPathPerc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, perc);
}
inline int32_t DG::Tweening::Plugins::Core::PathCore::Path::GetWaypointIndexFromPerc(float_t  perc, bool  isMovingForward)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "GetWaypointIndexFromPerc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, perc, isMovingForward);
}
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> DG::Tweening::Plugins::Core::PathCore::Path::GetDrawPoints(::DG::Tweening::Plugins::Core::PathCore::Path*  p, int32_t  drawSubdivisionsXSegment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "GetDrawPoints",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, false>(nullptr, ___internal_method, p, drawSubdivisionsXSegment);
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::RefreshNonLinearDrawWps(::DG::Tweening::Plugins::Core::PathCore::Path*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "RefreshNonLinearDrawWps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "Destroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DG::Tweening::Plugins::Core::PathCore::Path* DG::Tweening::Plugins::Core::PathCore::Path::CloneIncremental(int32_t  loopIncrement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "CloneIncremental",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Plugins::Core::PathCore::Path*, false>(this, ___internal_method, loopIncrement);
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::AssignWaypoints(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  newWps, bool  cloneWps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "AssignWaypoints",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newWps, cloneWps);
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::AssignDecoder(::DG::Tweening::PathType  pathType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "AssignDecoder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::PathType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pathType);
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::Draw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "Draw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void DG::Tweening::Plugins::Core::PathCore::Path::Draw(::DG::Tweening::Plugins::Core::PathCore::Path*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::PathCore::Path*>::get(),
                        "Draw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Plugins::Core::PathCore::Path*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
inline ::DG::Tweening::Plugins::Core::PathCore::Path* DG::Tweening::Plugins::Core::PathCore::Path::New_ctor(::DG::Tweening::PathType  type, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  waypoints, int32_t  subdivisionsXSegment, ::System::Nullable_1<::UnityEngine::Color>  gizmoColor)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Plugins::Core::PathCore::Path*>(type, waypoints, subdivisionsXSegment, gizmoColor));
}
inline ::DG::Tweening::Plugins::Core::PathCore::Path* DG::Tweening::Plugins::Core::PathCore::Path::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Plugins::Core::PathCore::Path*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::Plugins::Core::PathCore::Path::Path()   {
}
