#pragma once
// IWYU pragma private; include "UnityEngine/WebCamDevice.hpp"
#include "UnityEngine/zzzz__WebCamKind_impl.hpp"
#include "UnityEngine/zzzz__WebCamDevice_def.hpp"
#include "UnityEngine/zzzz__Resolution_def.hpp"
//  Writing Method size for method: ::UnityEngine::WebCamDevice.get_name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::WebCamDevice::*)()>(&::UnityEngine::WebCamDevice::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f59190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WebCamDevice>::get(),
                        "get_name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WebCamDevice.get_isFrontFacing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::WebCamDevice::*)()>(&::UnityEngine::WebCamDevice::get_isFrontFacing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f59198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WebCamDevice>::get(),
                        "get_isFrontFacing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::WebCamDevice::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WebCamDevice>::get(),
                        "get_name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::WebCamDevice::get_isFrontFacing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WebCamDevice>::get(),
                        "get_isFrontFacing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DepthCameraName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Kind", ty: "::UnityEngine::WebCamKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Resolutions", ty: "::ArrayW<::UnityEngine::Resolution,::Array<::UnityEngine::Resolution>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::WebCamDevice::WebCamDevice(::StringW  m_Name, ::StringW  m_DepthCameraName, int32_t  m_Flags, ::UnityEngine::WebCamKind  m_Kind, ::ArrayW<::UnityEngine::Resolution,::Array<::UnityEngine::Resolution>*>  m_Resolutions) noexcept  {
this->m_Name = m_Name;
this->m_DepthCameraName = m_DepthCameraName;
this->m_Flags = m_Flags;
this->m_Kind = m_Kind;
this->m_Resolutions = m_Resolutions;
}
// Ctor Parameters []
constexpr ::UnityEngine::WebCamDevice::WebCamDevice()   {
}
