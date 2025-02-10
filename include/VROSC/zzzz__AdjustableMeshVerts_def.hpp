#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshVerts.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AdjustableMeshVerts)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshVerts;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshVerts);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshVerts
class CORDL_TYPE AdjustableMeshVerts : public ::System::Object {
public:
// Declarations
/// @brief Field _adjustableMesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

static inline ::VROSC::AdjustableMeshVerts* New_ctor(::VROSC::AdjustableMesh*  adjustableMesh) ;

/// @brief Method SetScale, addr 0x17ac334, size 0x1ec, virtual false, abstract: false, final false
inline void SetScale(::UnityEngine::Vector3  scale) ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

/// @brief Method .ctor, addr 0x17ac30c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AdjustableMesh*  adjustableMesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshVerts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshVerts", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshVerts(AdjustableMeshVerts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshVerts", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshVerts(AdjustableMeshVerts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1419};

/// @brief Field _adjustableMesh, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshVerts, ____adjustableMesh) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshVerts, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshVerts);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshVerts*, "VROSC", "AdjustableMeshVerts");
