#pragma once
// IWYU pragma private; include "VROSC/RenderLIV.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__RenderLIV_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::VROSC::RenderLIV.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RenderLIV::*)()>(&::VROSC::RenderLIV::Setup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x172d100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RenderLIV.Activate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RenderLIV::*)()>(&::VROSC::RenderLIV::Activate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x172d150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        "Activate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RenderLIV.Deactivate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RenderLIV::*)()>(&::VROSC::RenderLIV::Deactivate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x172d180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        "Deactivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RenderLIV.OnRenderImage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RenderLIV::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::VROSC::RenderLIV::OnRenderImage)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x172d1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        "OnRenderImage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RenderLIV._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RenderLIV::*)()>(&::VROSC::RenderLIV::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172d284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::RenderLIV::__cordl_internal_get__livActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____livActive;
}
constexpr bool const& VROSC::RenderLIV::__cordl_internal_get__livActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____livActive;
}
constexpr void VROSC::RenderLIV::__cordl_internal_set__livActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____livActive = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& VROSC::RenderLIV::__cordl_internal_get__camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& VROSC::RenderLIV::__cordl_internal_get__camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr void VROSC::RenderLIV::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::RenderLIV::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::RenderLIV::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        "Activate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::RenderLIV::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        "Deactivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::RenderLIV::OnRenderImage(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        "OnRenderImage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest);
}
inline void VROSC::RenderLIV::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RenderLIV*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::RenderLIV* VROSC::RenderLIV::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::RenderLIV*>());
}
// Ctor Parameters []
constexpr ::VROSC::RenderLIV::RenderLIV()   {
}
