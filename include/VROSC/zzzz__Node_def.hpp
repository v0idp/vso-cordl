#pragma once
// IWYU pragma private; include "VROSC/Node.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Node)
// Forward declare root types
namespace VROSC {
class Node;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Node);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Node
class CORDL_TYPE Node : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::VROSC::Node* New_ctor() ;

/// @brief Method .ctor, addr 0x171a86c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Node(Node && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node(Node const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{945};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::Node, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Node);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Node*, "VROSC", "Node");
