#pragma once
// IWYU pragma private; include "VROSC/SpectatorCameraController.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SpectatorCameraController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "VROSC/zzzz__CopyCameraOutputToRenderTexture_def.hpp"
#include "VROSC/zzzz__RenderLIV_def.hpp"
#include "VROSC/zzzz__SpectatorCameraAnchor_def.hpp"
//  Writing Method size for method: ::VROSC::SpectatorCameraController.get_Camera
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::get_Camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172d9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_Camera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.get_EnvironmentMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)()>(&::VROSC::SpectatorCameraController::get_EnvironmentMask)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x172d9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_EnvironmentMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.set_EnvironmentMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LayerMask)>(&::VROSC::SpectatorCameraController::set_EnvironmentMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x172da08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "set_EnvironmentMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.get_PlayerMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)()>(&::VROSC::SpectatorCameraController::get_PlayerMask)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x172da54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_PlayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.set_PlayerMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LayerMask)>(&::VROSC::SpectatorCameraController::set_PlayerMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x172da9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "set_PlayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.get_ActiveIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::get_ActiveIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172dae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_ActiveIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.get_ActiveAnchor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::SpectatorCameraAnchor> (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::get_ActiveAnchor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x172daf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_ActiveAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::Awake)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x172db3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.SetSpectatorRenderTextureActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)(bool, ::System::Object*)>(&::VROSC::SpectatorCameraController::SetSpectatorRenderTextureActive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x172ced0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "SetSpectatorRenderTextureActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.ChangeCamera
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)(int32_t)>(&::VROSC::SpectatorCameraController::ChangeCamera)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x172dd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "ChangeCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.ApplyAnchorDefaultLayerMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::ApplyAnchorDefaultLayerMask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x172d1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "ApplyAnchorDefaultLayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.SetEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)(bool)>(&::VROSC::SpectatorCameraController::SetEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x172dccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "SetEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.GetAnchorDisplayNames
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::GetAnchorDisplayNames)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x172dd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "GetAnchorDisplayNames",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.MainStateEntered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::MainStateEntered)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x172deac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "MainStateEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.ResetGrabbableCameraPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::ResetGrabbableCameraPosition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x172ceec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "ResetGrabbableCameraPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.LivActivated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::LivActivated)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x172dfdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "LivActivated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.LivDeactivated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::LivDeactivated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x172e010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "LivDeactivated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.UpdateHideBackgroundState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::UpdateHideBackgroundState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x172df78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "UpdateHideBackgroundState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.SpectatorHideBackgroundToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)(bool)>(&::VROSC::SpectatorCameraController::SpectatorHideBackgroundToggled)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x172e040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "SpectatorHideBackgroundToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController.SetKeyboardVisible
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)(bool)>(&::VROSC::SpectatorCameraController::SetKeyboardVisible)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x172e3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "SetKeyboardVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SpectatorCameraController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SpectatorCameraController::*)()>(&::VROSC::SpectatorCameraController::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x172e5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& VROSC::SpectatorCameraController::__cordl_internal_get__spectatorCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spectatorCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& VROSC::SpectatorCameraController::__cordl_internal_get__spectatorCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spectatorCamera;
}
constexpr void VROSC::SpectatorCameraController::__cordl_internal_set__spectatorCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spectatorCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::SpectatorCameraAnchor>,::Array<::UnityW<::VROSC::SpectatorCameraAnchor>>*>& VROSC::SpectatorCameraController::__cordl_internal_get__cameraAnchors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraAnchors;
}
constexpr ::ArrayW<::UnityW<::VROSC::SpectatorCameraAnchor>,::Array<::UnityW<::VROSC::SpectatorCameraAnchor>>*> const& VROSC::SpectatorCameraController::__cordl_internal_get__cameraAnchors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraAnchors;
}
constexpr void VROSC::SpectatorCameraController::__cordl_internal_set__cameraAnchors(::ArrayW<::UnityW<::VROSC::SpectatorCameraAnchor>,::Array<::UnityW<::VROSC::SpectatorCameraAnchor>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraAnchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::SpectatorCameraController::__cordl_internal_get__followSmoothDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followSmoothDuration;
}
constexpr float_t const& VROSC::SpectatorCameraController::__cordl_internal_get__followSmoothDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followSmoothDuration;
}
constexpr void VROSC::SpectatorCameraController::__cordl_internal_set__followSmoothDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followSmoothDuration = value;
}
constexpr float_t& VROSC::SpectatorCameraController::__cordl_internal_get__moveSmoothDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveSmoothDuration;
}
constexpr float_t const& VROSC::SpectatorCameraController::__cordl_internal_get__moveSmoothDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveSmoothDuration;
}
constexpr void VROSC::SpectatorCameraController::__cordl_internal_set__moveSmoothDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveSmoothDuration = value;
}
constexpr float_t& VROSC::SpectatorCameraController::__cordl_internal_get__fovSmoothDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fovSmoothDuration;
}
constexpr float_t const& VROSC::SpectatorCameraController::__cordl_internal_get__fovSmoothDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fovSmoothDuration;
}
constexpr void VROSC::SpectatorCameraController::__cordl_internal_set__fovSmoothDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fovSmoothDuration = value;
}
constexpr ::UnityW<::VROSC::RenderLIV>& VROSC::SpectatorCameraController::__cordl_internal_get__renderLIV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderLIV;
}
constexpr ::UnityW<::VROSC::RenderLIV> const& VROSC::SpectatorCameraController::__cordl_internal_get__renderLIV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderLIV;
}
constexpr void VROSC::SpectatorCameraController::__cordl_internal_set__renderLIV(::UnityW<::VROSC::RenderLIV>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderLIV)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::CopyCameraOutputToRenderTexture>& VROSC::SpectatorCameraController::__cordl_internal_get__renderTextureOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderTextureOutput;
}
constexpr ::UnityW<::VROSC::CopyCameraOutputToRenderTexture> const& VROSC::SpectatorCameraController::__cordl_internal_get__renderTextureOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderTextureOutput;
}
constexpr void VROSC::SpectatorCameraController::__cordl_internal_set__renderTextureOutput(::UnityW<::VROSC::CopyCameraOutputToRenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderTextureOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::SpectatorCameraController::__cordl_internal_get__activeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeIndex;
}
constexpr int32_t const& VROSC::SpectatorCameraController::__cordl_internal_get__activeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeIndex;
}
constexpr void VROSC::SpectatorCameraController::__cordl_internal_set__activeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeIndex = value;
}
constexpr bool& VROSC::SpectatorCameraController::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& VROSC::SpectatorCameraController::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void VROSC::SpectatorCameraController::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
inline void VROSC::SpectatorCameraController::setStaticF__EnvironmentMask_k__BackingField(::UnityEngine::LayerMask  value)  {
::cordl_internals::setStaticField<::UnityEngine::LayerMask, "<EnvironmentMask>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get>(std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask VROSC::SpectatorCameraController::getStaticF__EnvironmentMask_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "<EnvironmentMask>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get>();
}
inline void VROSC::SpectatorCameraController::setStaticF__PlayerMask_k__BackingField(::UnityEngine::LayerMask  value)  {
::cordl_internals::setStaticField<::UnityEngine::LayerMask, "<PlayerMask>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get>(std::forward<::UnityEngine::LayerMask>(value));
}
inline ::UnityEngine::LayerMask VROSC::SpectatorCameraController::getStaticF__PlayerMask_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::LayerMask, "<PlayerMask>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get>();
}
inline ::UnityW<::UnityEngine::Camera> VROSC::SpectatorCameraController::get_Camera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_Camera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask VROSC::SpectatorCameraController::get_EnvironmentMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_EnvironmentMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(nullptr, ___internal_method);
}
inline void VROSC::SpectatorCameraController::set_EnvironmentMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "set_EnvironmentMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::LayerMask VROSC::SpectatorCameraController::get_PlayerMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_PlayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(nullptr, ___internal_method);
}
inline void VROSC::SpectatorCameraController::set_PlayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "set_PlayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t VROSC::SpectatorCameraController::get_ActiveIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_ActiveIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::SpectatorCameraAnchor> VROSC::SpectatorCameraController::get_ActiveAnchor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "get_ActiveAnchor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::SpectatorCameraAnchor>, false>(this, ___internal_method);
}
inline void VROSC::SpectatorCameraController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpectatorCameraController::SetSpectatorRenderTextureActive(bool  active, ::System::Object*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "SetSpectatorRenderTextureActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active, source);
}
inline void VROSC::SpectatorCameraController::ChangeCamera(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "ChangeCamera",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void VROSC::SpectatorCameraController::ApplyAnchorDefaultLayerMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "ApplyAnchorDefaultLayerMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpectatorCameraController::SetEnabled(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "SetEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEnabled);
}
inline ::System::Collections::Generic::List_1<::StringW>* VROSC::SpectatorCameraController::GetAnchorDisplayNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "GetAnchorDisplayNames",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void VROSC::SpectatorCameraController::MainStateEntered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "MainStateEntered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpectatorCameraController::ResetGrabbableCameraPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "ResetGrabbableCameraPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpectatorCameraController::LivActivated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "LivActivated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpectatorCameraController::LivDeactivated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "LivDeactivated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpectatorCameraController::UpdateHideBackgroundState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "UpdateHideBackgroundState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SpectatorCameraController::SpectatorHideBackgroundToggled(bool  hideBackground)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "SpectatorHideBackgroundToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hideBackground);
}
inline void VROSC::SpectatorCameraController::SetKeyboardVisible(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        "SetKeyboardVisible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visible);
}
inline void VROSC::SpectatorCameraController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SpectatorCameraController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SpectatorCameraController* VROSC::SpectatorCameraController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SpectatorCameraController*>());
}
// Ctor Parameters []
constexpr ::VROSC::SpectatorCameraController::SpectatorCameraController()   {
}
