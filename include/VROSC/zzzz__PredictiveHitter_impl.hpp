#pragma once
// IWYU pragma private; include "VROSC/PredictiveHitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__PredictiveHitter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__PredictiveHitWisp_def.hpp"
#include "VROSC/zzzz__PredictiveHittable_def.hpp"
#include "VROSC/zzzz__PredictiveHitterSettings_def.hpp"
#include "VROSC/zzzz__PredictiveHitter_def.hpp"
#include "VROSC/zzzz__SignalControllerInfo_def.hpp"
//  Writing Method size for method: ::VROSC::PredictiveHitter_PredictedHit._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter_PredictedHit::*)(::VROSC::PredictiveHittable*, double_t)>(&::VROSC::PredictiveHitter_PredictedHit::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x16f3724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter_PredictedHit*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PredictiveHittable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::PredictiveHittable>& VROSC::PredictiveHitter_PredictedHit::__cordl_internal_get_PredictiveHittable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PredictiveHittable;
}
constexpr ::UnityW<::VROSC::PredictiveHittable> const& VROSC::PredictiveHitter_PredictedHit::__cordl_internal_get_PredictiveHittable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PredictiveHittable;
}
constexpr void VROSC::PredictiveHitter_PredictedHit::__cordl_internal_set_PredictiveHittable(::UnityW<::VROSC::PredictiveHittable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PredictiveHittable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& VROSC::PredictiveHitter_PredictedHit::__cordl_internal_get_PredictedDSPTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PredictedDSPTime;
}
constexpr double_t const& VROSC::PredictiveHitter_PredictedHit::__cordl_internal_get_PredictedDSPTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PredictedDSPTime;
}
constexpr void VROSC::PredictiveHitter_PredictedHit::__cordl_internal_set_PredictedDSPTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PredictedDSPTime = value;
}
inline void VROSC::PredictiveHitter_PredictedHit::_ctor(::VROSC::PredictiveHittable*  predictiveHittable, double_t  predictedDspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter_PredictedHit*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PredictiveHittable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, predictiveHittable, predictedDspTime);
}
inline ::VROSC::PredictiveHitter_PredictedHit* VROSC::PredictiveHitter_PredictedHit::New_ctor(::VROSC::PredictiveHittable*  predictiveHittable, double_t  predictedDspTime)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PredictiveHitter_PredictedHit*>(predictiveHittable, predictedDspTime));
}
// Ctor Parameters []
constexpr ::VROSC::PredictiveHitter_PredictedHit::PredictiveHitter_PredictedHit()   {
}
//  Writing Method size for method: ::VROSC::PredictiveHitter.get_IsMalletOrOnlyHitter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::PredictiveHitter::*)()>(&::VROSC::PredictiveHitter::get_IsMalletOrOnlyHitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f2100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "get_IsMalletOrOnlyHitter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.set_IsMalletOrOnlyHitter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)(bool)>(&::VROSC::PredictiveHitter::set_IsMalletOrOnlyHitter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16f2108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "set_IsMalletOrOnlyHitter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.get_MaxPredictionTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::PredictiveHitter::*)()>(&::VROSC::PredictiveHitter::get_MaxPredictionTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x16f2114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "get_MaxPredictionTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)(::VROSC::InputDevice*, bool)>(&::VROSC::PredictiveHitter::Setup)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x16f2180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.OnGrabbed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)(::VROSC::InputDevice*, bool)>(&::VROSC::PredictiveHitter::OnGrabbed)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x16f23d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "OnGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)()>(&::VROSC::PredictiveHitter::Update)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x16f2524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.GetControllerInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SignalControllerInfo* (::VROSC::PredictiveHitter::*)(::VROSC::PredictiveHittable*, ::UnityEngine::Vector3)>(&::VROSC::PredictiveHitter::GetControllerInfo)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x16f32ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "GetControllerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PredictiveHittable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.IsNewHittable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::PredictiveHitter::*)(::VROSC::PredictiveHittable*, ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*)>(&::VROSC::PredictiveHitter::IsNewHittable)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x16f302c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "IsNewHittable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PredictiveHittable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.RayForHittables
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::PredictiveHitter::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::VROSC::PredictiveHittable*,::Array<::VROSC::PredictiveHittable*>*>, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>)>(&::VROSC::PredictiveHitter::RayForHittables)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x16f2d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "RayForHittables",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::VROSC::PredictiveHittable*,::Array<::VROSC::PredictiveHittable*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.CalculateSmoothedVelocity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)()>(&::VROSC::PredictiveHitter::CalculateSmoothedVelocity)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x16f3414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "CalculateSmoothedVelocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)()>(&::VROSC::PredictiveHitter::Reset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x16f246c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.SetDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)(bool)>(&::VROSC::PredictiveHitter::SetDisabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16f375c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "SetDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.SetHittingDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)(bool)>(&::VROSC::PredictiveHitter::SetHittingDisabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16f3768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "SetHittingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter.UpdateDebugObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)(::UnityEngine::Vector3)>(&::VROSC::PredictiveHitter::UpdateDebugObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16f3774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "UpdateDebugObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PredictiveHitter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PredictiveHitter::*)()>(&::VROSC::PredictiveHitter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16f3778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::PredictiveHitter::__cordl_internal_get__device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::PredictiveHitter::__cordl_internal_get__device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__device(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*& VROSC::PredictiveHitter::__cordl_internal_get__predictedHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictedHits;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>* const& VROSC::PredictiveHitter::__cordl_internal_get__predictedHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictedHits;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__predictedHits(::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____predictedHits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::PredictiveHitWisp>& VROSC::PredictiveHitter::__cordl_internal_get__visualObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualObject;
}
constexpr ::UnityW<::VROSC::PredictiveHitWisp> const& VROSC::PredictiveHitter::__cordl_internal_get__visualObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualObject;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__visualObject(::UnityW<::VROSC::PredictiveHitWisp>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visualObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::PredictiveHitterSettings>& VROSC::PredictiveHitter::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::VROSC::PredictiveHitterSettings> const& VROSC::PredictiveHitter::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__settings(::UnityW<::VROSC::PredictiveHitterSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::PredictiveHitter::__cordl_internal_get__latencyAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latencyAdjustment;
}
constexpr float_t const& VROSC::PredictiveHitter::__cordl_internal_get__latencyAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latencyAdjustment;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__latencyAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latencyAdjustment = value;
}
constexpr ::UnityEngine::Vector3& VROSC::PredictiveHitter::__cordl_internal_get__lastFramePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFramePosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::PredictiveHitter::__cordl_internal_get__lastFramePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFramePosition;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__lastFramePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFramePosition = value;
}
constexpr ::UnityEngine::Vector3& VROSC::PredictiveHitter::__cordl_internal_get__velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr ::UnityEngine::Vector3 const& VROSC::PredictiveHitter::__cordl_internal_get__velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocity;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocity = value;
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& VROSC::PredictiveHitter::__cordl_internal_get__velocitySmoothingBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocitySmoothingBuffer;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& VROSC::PredictiveHitter::__cordl_internal_get__velocitySmoothingBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocitySmoothingBuffer;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__velocitySmoothingBuffer(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____velocitySmoothingBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::PredictiveHitter::__cordl_internal_get__velocityBufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityBufferIndex;
}
constexpr int32_t const& VROSC::PredictiveHitter::__cordl_internal_get__velocityBufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____velocityBufferIndex;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__velocityBufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____velocityBufferIndex = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>& VROSC::PredictiveHitter::__cordl_internal_get__raycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> const& VROSC::PredictiveHitter::__cordl_internal_get__raycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHits;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__raycastHits(::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____raycastHits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& VROSC::PredictiveHitter::__cordl_internal_get__hitPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& VROSC::PredictiveHitter::__cordl_internal_get__hitPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitPoints;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__hitPoints(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hitPoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::PredictiveHittable>,::Array<::UnityW<::VROSC::PredictiveHittable>>*>& VROSC::PredictiveHitter::__cordl_internal_get__hittables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hittables;
}
constexpr ::ArrayW<::UnityW<::VROSC::PredictiveHittable>,::Array<::UnityW<::VROSC::PredictiveHittable>>*> const& VROSC::PredictiveHitter::__cordl_internal_get__hittables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hittables;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__hittables(::ArrayW<::UnityW<::VROSC::PredictiveHittable>,::Array<::UnityW<::VROSC::PredictiveHittable>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hittables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::PredictiveHitter::__cordl_internal_get__debugObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::PredictiveHitter::__cordl_internal_get__debugObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugObject;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__debugObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::PredictiveHitter::__cordl_internal_get__IsMalletOrOnlyHitter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMalletOrOnlyHitter_k__BackingField;
}
constexpr bool const& VROSC::PredictiveHitter::__cordl_internal_get__IsMalletOrOnlyHitter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsMalletOrOnlyHitter_k__BackingField;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__IsMalletOrOnlyHitter_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsMalletOrOnlyHitter_k__BackingField = value;
}
constexpr bool& VROSC::PredictiveHitter::__cordl_internal_get__isInputDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInputDisabled;
}
constexpr bool const& VROSC::PredictiveHitter::__cordl_internal_get__isInputDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInputDisabled;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__isInputDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInputDisabled = value;
}
constexpr bool& VROSC::PredictiveHitter::__cordl_internal_get__isHittingDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHittingDisabled;
}
constexpr bool const& VROSC::PredictiveHitter::__cordl_internal_get__isHittingDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHittingDisabled;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set__isHittingDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHittingDisabled = value;
}
constexpr ::System::Action_2<float_t,bool>*& VROSC::PredictiveHitter::__cordl_internal_get_OnHitDSP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitDSP;
}
constexpr ::System::Action_2<float_t,bool>* const& VROSC::PredictiveHitter::__cordl_internal_get_OnHitDSP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHitDSP;
}
constexpr void VROSC::PredictiveHitter::__cordl_internal_set_OnHitDSP(::System::Action_2<float_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnHitDSP)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VROSC::PredictiveHitter::get_IsMalletOrOnlyHitter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "get_IsMalletOrOnlyHitter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::PredictiveHitter::set_IsMalletOrOnlyHitter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "set_IsMalletOrOnlyHitter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t VROSC::PredictiveHitter::get_MaxPredictionTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "get_MaxPredictionTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::PredictiveHitter::Setup(::VROSC::InputDevice*  device, bool  isMalletOrOnlyHitter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, isMalletOrOnlyHitter);
}
inline void VROSC::PredictiveHitter::OnGrabbed(::VROSC::InputDevice*  inputDevice, bool  grabbed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "OnGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, grabbed);
}
inline void VROSC::PredictiveHitter::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SignalControllerInfo* VROSC::PredictiveHitter::GetControllerInfo(::VROSC::PredictiveHittable*  hittable, ::UnityEngine::Vector3  hitPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "GetControllerInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PredictiveHittable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::SignalControllerInfo*, false>(this, ___internal_method, hittable, hitPoint);
}
inline bool VROSC::PredictiveHitter::IsNewHittable(::VROSC::PredictiveHittable*  hittable, ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*  predictionList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "IsNewHittable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PredictiveHittable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::PredictiveHitter_PredictedHit*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hittable, predictionList);
}
inline int32_t VROSC::PredictiveHitter::RayForHittables(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Vector3  toPosition, ::ArrayW<::VROSC::PredictiveHittable*,::Array<::VROSC::PredictiveHittable*>*>  hittables, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  hitPoints)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "RayForHittables",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::VROSC::PredictiveHittable*,::Array<::VROSC::PredictiveHittable*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, fromPosition, toPosition, hittables, hitPoints);
}
inline void VROSC::PredictiveHitter::CalculateSmoothedVelocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "CalculateSmoothedVelocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PredictiveHitter::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PredictiveHitter::SetDisabled(bool  disabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "SetDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disabled);
}
inline void VROSC::PredictiveHitter::SetHittingDisabled(bool  disabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "SetHittingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disabled);
}
inline void VROSC::PredictiveHitter::UpdateDebugObject(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        "UpdateDebugObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void VROSC::PredictiveHitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PredictiveHitter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PredictiveHitter* VROSC::PredictiveHitter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PredictiveHitter*>());
}
// Ctor Parameters []
constexpr ::VROSC::PredictiveHitter::PredictiveHitter()   {
}
