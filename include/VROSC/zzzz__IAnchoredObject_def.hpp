#pragma once
// IWYU pragma private; include "VROSC/IAnchoredObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAnchoredObject)
namespace VROSC {
class TransformMover;
}
// Forward declare root types
namespace VROSC {
class IAnchoredObject;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IAnchoredObject);
// Dependencies 
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IAnchoredObject
class CORDL_TYPE IAnchoredObject {
public:
// Declarations
 __declspec(property(get=get_TransformMover)) ::UnityW<::VROSC::TransformMover>  TransformMover;

/// @brief Method AddSpatialAnchorToData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddSpatialAnchorToData(::StringW  anchorUuid) ;

/// @brief Method RemoveSpatialAnchorFromData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RemoveSpatialAnchorFromData(::StringW  anchorUuid) ;

/// @brief Method get_TransformMover, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::TransformMover> get_TransformMover() ;

// Ctor Parameters [CppParam { name: "", ty: "IAnchoredObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnchoredObject(IAnchoredObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IAnchoredObject);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IAnchoredObject*, "VROSC", "IAnchoredObject");
