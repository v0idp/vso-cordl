#pragma once
// IWYU pragma private; include "VROSC/SignalToMover.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(SignalToMover)
namespace VROSC {
class Signal;
}
namespace VROSC {
class TransformMover;
}
// Forward declare root types
namespace VROSC {
class SignalToMover;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SignalToMover);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SignalToMover
class CORDL_TYPE SignalToMover : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field transformMover, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformMover, put=__cordl_internal_set_transformMover)) ::UnityW<::VROSC::TransformMover>  transformMover;

static inline ::VROSC::SignalToMover* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1720488, size 0xc0, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x172054c, size 0xc0, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get_transformMover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get_transformMover() ;

constexpr void __cordl_internal_set_transformMover(::UnityW<::VROSC::TransformMover>  value) ;

/// @brief Method .ctor, addr 0x172060c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignalToMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignalToMover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalToMover(SignalToMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalToMover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalToMover(SignalToMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{971};

/// @brief Field transformMover, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ___transformMover;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SignalToMover, ___transformMover) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SignalToMover, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SignalToMover);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalToMover*, "VROSC", "SignalToMover");
