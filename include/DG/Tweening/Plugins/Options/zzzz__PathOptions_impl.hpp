#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/PathOptions.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_impl.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__OrientType_impl.hpp"
#include "DG/Tweening/zzzz__AxisConstraint_impl.hpp"
#include "DG/Tweening/zzzz__PathMode_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__PathOptions_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Plugins::Options::PathOptions.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Options::PathOptions::*)()>(&::DG::Tweening::Plugins::Options::PathOptions::Reset)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x18e07bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::PathOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void DG::Tweening::Plugins::Options::PathOptions::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::PathOptions>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr  DG::Tweening::Plugins::Options::PathOptions::operator ::DG::Tweening::Plugins::Options::IPlugOptions*()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::DG::Tweening::Plugins::Options::IPlugOptions"
constexpr ::DG::Tweening::Plugins::Options::IPlugOptions* DG::Tweening::Plugins::Options::PathOptions::i___DG__Tweening__Plugins__Options__IPlugOptions()  {
return static_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "mode", ty: "::DG::Tweening::PathMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientType", ty: "::DG::Tweening::Plugins::Options::OrientType", modifiers: "", def_value: Some("{}") }, CppParam { name: "lockPositionAxis", ty: "::DG::Tweening::AxisConstraint", modifiers: "", def_value: Some("{}") }, CppParam { name: "lockRotationAxis", ty: "::DG::Tweening::AxisConstraint", modifiers: "", def_value: Some("{}") }, CppParam { name: "isClosedPath", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "lookAtPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "lookAtTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lookAhead", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasCustomForwardDirection", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "forward", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "useLocalPosition", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "parent", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "isRigidbody", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "startupRot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "startupZRot", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "addedExtraStartWp", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "addedExtraEndWp", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Plugins::Options::PathOptions::PathOptions(::DG::Tweening::PathMode  mode, ::DG::Tweening::Plugins::Options::OrientType  orientType, ::DG::Tweening::AxisConstraint  lockPositionAxis, ::DG::Tweening::AxisConstraint  lockRotationAxis, bool  isClosedPath, ::UnityEngine::Vector3  lookAtPosition, ::UnityW<::UnityEngine::Transform>  lookAtTransform, float_t  lookAhead, bool  hasCustomForwardDirection, ::UnityEngine::Quaternion  forward, bool  useLocalPosition, ::UnityW<::UnityEngine::Transform>  parent, bool  isRigidbody, ::UnityEngine::Quaternion  startupRot, float_t  startupZRot, bool  addedExtraStartWp, bool  addedExtraEndWp) noexcept  {
this->mode = mode;
this->orientType = orientType;
this->lockPositionAxis = lockPositionAxis;
this->lockRotationAxis = lockRotationAxis;
this->isClosedPath = isClosedPath;
this->lookAtPosition = lookAtPosition;
this->lookAtTransform = lookAtTransform;
this->lookAhead = lookAhead;
this->hasCustomForwardDirection = hasCustomForwardDirection;
this->forward = forward;
this->useLocalPosition = useLocalPosition;
this->parent = parent;
this->isRigidbody = isRigidbody;
this->startupRot = startupRot;
this->startupZRot = startupZRot;
this->addedExtraStartWp = addedExtraStartWp;
this->addedExtraEndWp = addedExtraEndWp;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Plugins::Options::PathOptions::PathOptions()   {
}
