#pragma once
// IWYU pragma private; include "VROSC/PatchData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PatchData)
// Forward declare root types
namespace VROSC {
class PatchData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PatchData);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PatchData
class CORDL_TYPE PatchData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_HelmChannel)) int32_t  HelmChannel;

/// @brief Field _displayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _helmChannel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__helmChannel, put=__cordl_internal_set__helmChannel)) int32_t  _helmChannel;

static inline ::VROSC::PatchData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr int32_t const& __cordl_internal_get__helmChannel() const;

constexpr int32_t& __cordl_internal_get__helmChannel() ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__helmChannel(int32_t  value) ;

/// @brief Method .ctor, addr 0x16f06b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0x16f06a0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_HelmChannel, addr 0x16f06a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_HelmChannel() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PatchData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PatchData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PatchData(PatchData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PatchData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PatchData(PatchData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{772};

/// @brief Field _displayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____displayName;

/// @brief Field _helmChannel, offset: 0x20, size: 0x4, def value: None
 int32_t  ____helmChannel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PatchData, ____displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::PatchData, ____helmChannel) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PatchData, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PatchData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PatchData*, "VROSC", "PatchData");
