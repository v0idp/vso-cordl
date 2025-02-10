#pragma once
// IWYU pragma private; include "VROSC/DebugHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugHelpers)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace VROSC {
class DebugHelpers;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DebugHelpers);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DebugHelpers
class CORDL_TYPE DebugHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method GetParentPathRecursive, addr 0x1883d78, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW GetParentPathRecursive(::UnityEngine::Transform*  transform, ::StringW  text) ;

/// @brief Method GetTransformPath, addr 0x1883d38, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetTransformPath(::UnityEngine::Transform*  transform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugHelpers(DebugHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugHelpers(DebugHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{589};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::DebugHelpers, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DebugHelpers);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DebugHelpers*, "VROSC", "DebugHelpers");
