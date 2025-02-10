#pragma once
// IWYU pragma private; include "UnityEngine/WebCamDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__WebCamKind_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebCamDevice)
namespace UnityEngine {
struct Resolution;
}
// Forward declare root types
namespace UnityEngine {
struct WebCamDevice;
}
// Write type traits
MARK_VAL_T(::UnityEngine::WebCamDevice);
// Dependencies UnityEngine.WebCamKind
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.WebCamDevice
struct CORDL_TYPE WebCamDevice {
public:
// Declarations
 __declspec(property(get=get_isFrontFacing)) bool  isFrontFacing;

 __declspec(property(get=get_name)) ::StringW  name;

/// @brief Method get_isFrontFacing, addr 0x2f59198, size 0xc, virtual false, abstract: false, final false
inline bool get_isFrontFacing() ;

/// @brief Method get_name, addr 0x2f59190, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebCamDevice() ;

// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_DepthCameraName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Kind", ty: "::UnityEngine::WebCamKind", modifiers: "", def_value: None }, CppParam { name: "m_Resolutions", ty: "::ArrayW<::UnityEngine::Resolution,::Array<::UnityEngine::Resolution>*>", modifiers: "", def_value: None }]
constexpr WebCamDevice(::StringW  m_Name, ::StringW  m_DepthCameraName, int32_t  m_Flags, ::UnityEngine::WebCamKind  m_Kind, ::ArrayW<::UnityEngine::Resolution,::Array<::UnityEngine::Resolution>*>  m_Resolutions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_Name;

/// @brief Field m_DepthCameraName, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_DepthCameraName;

/// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
 int32_t  m_Flags;

/// @brief Field m_Kind, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::WebCamKind  m_Kind;

/// @brief Field m_Resolutions, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Resolution,::Array<::UnityEngine::Resolution>*>  m_Resolutions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::WebCamDevice, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WebCamDevice, m_DepthCameraName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WebCamDevice, m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WebCamDevice, m_Kind) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WebCamDevice, m_Resolutions) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::WebCamDevice, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WebCamDevice, "UnityEngine", "WebCamDevice");
