#pragma once
// IWYU pragma private; include "VROSC/ParameterLinksPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ParameterLinksPreset)
namespace VROSC {
class ParameterLink;
}
// Forward declare root types
namespace VROSC {
class ParameterLinksPreset;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ParameterLinksPreset);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ParameterLinksPreset
class CORDL_TYPE ParameterLinksPreset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field ParameterLinks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ParameterLinks, put=__cordl_internal_set_ParameterLinks)) ::ArrayW<::VROSC::ParameterLink*,::Array<::VROSC::ParameterLink*>*>  ParameterLinks;

static inline ::VROSC::ParameterLinksPreset* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::ArrayW<::VROSC::ParameterLink*,::Array<::VROSC::ParameterLink*>*> const& __cordl_internal_get_ParameterLinks() const;

constexpr ::ArrayW<::VROSC::ParameterLink*,::Array<::VROSC::ParameterLink*>*>& __cordl_internal_get_ParameterLinks() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_ParameterLinks(::ArrayW<::VROSC::ParameterLink*,::Array<::VROSC::ParameterLink*>*>  value) ;

/// @brief Method .ctor, addr 0x1711268, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParameterLinksPreset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParameterLinksPreset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterLinksPreset(ParameterLinksPreset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterLinksPreset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterLinksPreset(ParameterLinksPreset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{895};

/// @brief Field Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field ParameterLinks, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::VROSC::ParameterLink*,::Array<::VROSC::ParameterLink*>*>  ___ParameterLinks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ParameterLinksPreset, ___Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ParameterLinksPreset, ___ParameterLinks) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ParameterLinksPreset, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ParameterLinksPreset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ParameterLinksPreset*, "VROSC", "ParameterLinksPreset");
