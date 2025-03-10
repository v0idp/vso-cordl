#pragma once
// IWYU pragma private; include "OVR/OpenVR/D3D12TextureData_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(D3D12TextureData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct D3D12TextureData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::D3D12TextureData_t);
// Dependencies System.IntPtr
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.D3D12TextureData_t
struct CORDL_TYPE D3D12TextureData_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr D3D12TextureData_t() ;

// Ctor Parameters [CppParam { name: "m_pResource", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_pCommandQueue", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_nNodeMask", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr D3D12TextureData_t(::System::IntPtr  m_pResource, ::System::IntPtr  m_pCommandQueue, uint32_t  m_nNodeMask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7231};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_pResource, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_pResource;

/// @brief Field m_pCommandQueue, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_pCommandQueue;

/// @brief Field m_nNodeMask, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_nNodeMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::D3D12TextureData_t, m_pResource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::D3D12TextureData_t, m_pCommandQueue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::D3D12TextureData_t, m_nNodeMask) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::D3D12TextureData_t, 0x18>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::D3D12TextureData_t, "OVR.OpenVR", "D3D12TextureData_t");
