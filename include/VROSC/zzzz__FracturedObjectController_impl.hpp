#pragma once
// IWYU pragma private; include "VROSC/FracturedObjectController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__FracturedObjectController_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__FracturedObjectController_def.hpp"
#include "VROSC/zzzz__MinMaxFloat_def.hpp"
//  Writing Method size for method: ::VROSC::FracturedObjectController___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FracturedObjectController___c::*)()>(&::VROSC::FracturedObjectController___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController___c._StoreAssembledPositions_b__25_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::FracturedObjectController___c::*)(::UnityEngine::Transform*)>(&::VROSC::FracturedObjectController___c::_StoreAssembledPositions_b__25_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1767748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController___c*>::get(),
                        "<StoreAssembledPositions>b__25_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::FracturedObjectController___c::setStaticF___9(::VROSC::FracturedObjectController___c*  value)  {
::cordl_internals::setStaticField<::VROSC::FracturedObjectController___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController___c*>::get>(std::forward<::VROSC::FracturedObjectController___c*>(value));
}
inline ::VROSC::FracturedObjectController___c* VROSC::FracturedObjectController___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::FracturedObjectController___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController___c*>::get>();
}
inline void VROSC::FracturedObjectController___c::setStaticF___9__25_0(::System::Func_2<::UnityW<::UnityEngine::Transform>,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>,float_t>*, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController___c*>::get>(std::forward<::System::Func_2<::UnityW<::UnityEngine::Transform>,float_t>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Transform>,float_t>* VROSC::FracturedObjectController___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>,float_t>*, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController___c*>::get>();
}
inline void VROSC::FracturedObjectController___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t VROSC::FracturedObjectController___c::_StoreAssembledPositions_b__25_0(::UnityEngine::Transform*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController___c*>::get(),
                        "<StoreAssembledPositions>b__25_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, obj);
}
inline ::VROSC::FracturedObjectController___c* VROSC::FracturedObjectController___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FracturedObjectController___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::FracturedObjectController___c::FracturedObjectController___c()   {
}
//  Writing Method size for method: ::VROSC::FracturedObjectController.get_PositionOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxFloat* (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::get_PositionOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_PositionOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.get_RotationOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxFloat* (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::get_RotationOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_RotationOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.get_RotationCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::get_RotationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_RotationCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.get_PositionCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::get_PositionCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_PositionCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.get_ScaleCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::get_ScaleCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_ScaleCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.get_Objects
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::get_Objects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_Objects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.get_AssembledPositions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::get_AssembledPositions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_AssembledPositions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.get_AssembledRotations
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::get_AssembledRotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1767448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_AssembledRotations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.GetAllChildren
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::GetAllChildren)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1767450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "GetAllChildren",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.StoreAssembledPositions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::StoreAssembledPositions)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x17674a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "StoreAssembledPositions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController.ResetObjects
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::ResetObjects)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1767030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "ResetObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FracturedObjectController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FracturedObjectController::*)()>(&::VROSC::FracturedObjectController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17676dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>& VROSC::FracturedObjectController::__cordl_internal_get__objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> const& VROSC::FracturedObjectController::__cordl_internal_get__objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objects;
}
constexpr void VROSC::FracturedObjectController::__cordl_internal_set__objects(::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& VROSC::FracturedObjectController::__cordl_internal_get__assembledPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assembledPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& VROSC::FracturedObjectController::__cordl_internal_get__assembledPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assembledPositions;
}
constexpr void VROSC::FracturedObjectController::__cordl_internal_set__assembledPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assembledPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>& VROSC::FracturedObjectController::__cordl_internal_get__assembledRotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assembledRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> const& VROSC::FracturedObjectController::__cordl_internal_get__assembledRotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assembledRotations;
}
constexpr void VROSC::FracturedObjectController::__cordl_internal_set__assembledRotations(::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assembledRotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxFloat*& VROSC::FracturedObjectController::__cordl_internal_get__positionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionOffset;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::FracturedObjectController::__cordl_internal_get__positionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionOffset;
}
constexpr void VROSC::FracturedObjectController::__cordl_internal_set__positionOffset(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxFloat*& VROSC::FracturedObjectController::__cordl_internal_get__rotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::FracturedObjectController::__cordl_internal_get__rotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationOffset;
}
constexpr void VROSC::FracturedObjectController::__cordl_internal_set__rotationOffset(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::FracturedObjectController::__cordl_internal_get__positionCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::FracturedObjectController::__cordl_internal_get__positionCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionCurve;
}
constexpr void VROSC::FracturedObjectController::__cordl_internal_set__positionCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::FracturedObjectController::__cordl_internal_get__rotationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::FracturedObjectController::__cordl_internal_get__rotationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationCurve;
}
constexpr void VROSC::FracturedObjectController::__cordl_internal_set__rotationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::FracturedObjectController::__cordl_internal_get__scaleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::FracturedObjectController::__cordl_internal_get__scaleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleCurve;
}
constexpr void VROSC::FracturedObjectController::__cordl_internal_set__scaleCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scaleCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::VROSC::MinMaxFloat* VROSC::FracturedObjectController::get_PositionOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_PositionOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MinMaxFloat*, false>(this, ___internal_method);
}
inline ::VROSC::MinMaxFloat* VROSC::FracturedObjectController::get_RotationOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_RotationOffset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MinMaxFloat*, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* VROSC::FracturedObjectController::get_RotationCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_RotationCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* VROSC::FracturedObjectController::get_PositionCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_PositionCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* VROSC::FracturedObjectController::get_ScaleCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_ScaleCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> VROSC::FracturedObjectController::get_Objects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_Objects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> VROSC::FracturedObjectController::get_AssembledPositions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_AssembledPositions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*> VROSC::FracturedObjectController::get_AssembledRotations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "get_AssembledRotations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Quaternion,::Array<::UnityEngine::Quaternion>*>, false>(this, ___internal_method);
}
inline void VROSC::FracturedObjectController::GetAllChildren()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "GetAllChildren",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FracturedObjectController::StoreAssembledPositions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "StoreAssembledPositions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FracturedObjectController::ResetObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        "ResetObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FracturedObjectController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FracturedObjectController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FracturedObjectController* VROSC::FracturedObjectController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FracturedObjectController*>());
}
// Ctor Parameters []
constexpr ::VROSC::FracturedObjectController::FracturedObjectController()   {
}
