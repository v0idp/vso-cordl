#pragma once
// IWYU pragma private; include "AudioHelm/HelmPatch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HelmPatch)
namespace AudioHelm {
class HelmPatchFormat;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace AudioHelm {
class HelmPatch;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::HelmPatch);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmPatch
class CORDL_TYPE HelmPatch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field patchData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_patchData, put=__cordl_internal_set_patchData)) ::AudioHelm::HelmPatchFormat*  patchData;

/// @brief Field patchObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_patchObject, put=__cordl_internal_set_patchObject)) ::UnityW<::UnityEngine::Object>  patchObject;

/// @brief Method LoadPatchData, addr 0x1820804, size 0x64, virtual false, abstract: false, final false
inline void LoadPatchData(::StringW  filePath) ;

static inline ::AudioHelm::HelmPatch* New_ctor() ;

constexpr ::AudioHelm::HelmPatchFormat* const& __cordl_internal_get_patchData() const;

constexpr ::AudioHelm::HelmPatchFormat*& __cordl_internal_get_patchData() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_patchObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_patchObject() ;

constexpr void __cordl_internal_set_patchData(::AudioHelm::HelmPatchFormat*  value) ;

constexpr void __cordl_internal_set_patchObject(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x1820868, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmPatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmPatch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmPatch(HelmPatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmPatch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmPatch(HelmPatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1878};

/// @brief Field patchObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___patchObject;

/// @brief Field patchData, offset: 0x28, size: 0x8, def value: None
 ::AudioHelm::HelmPatchFormat*  ___patchData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmPatch, ___patchObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmPatch, ___patchData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmPatch, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::HelmPatch);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmPatch*, "AudioHelm", "HelmPatch");
