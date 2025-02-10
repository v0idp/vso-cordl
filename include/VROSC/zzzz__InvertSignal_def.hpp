#pragma once
// IWYU pragma private; include "VROSC/InvertSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(InvertSignal)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class InvertSignal;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InvertSignal);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InvertSignal
class CORDL_TYPE InvertSignal : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _signal, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__signal, put=__cordl_internal_set__signal)) ::VROSC::Signal*  _signal;

/// @brief Method LateUpdate, addr 0x1721744, size 0x44, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::InvertSignal* New_ctor() ;

/// @brief Method ReceiveSignal, addr 0x1721788, size 0x24, virtual true, abstract: false, final false
inline void ReceiveSignal(::VROSC::Signal*  signal) ;

constexpr ::VROSC::Signal* const& __cordl_internal_get__signal() const;

constexpr ::VROSC::Signal*& __cordl_internal_get__signal() ;

constexpr void __cordl_internal_set__signal(::VROSC::Signal*  value) ;

/// @brief Method .ctor, addr 0x17217ac, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvertSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvertSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvertSignal(InvertSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvertSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvertSignal(InvertSignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{986};

/// @brief Field _signal, offset: 0x48, size: 0x8, def value: None
 ::VROSC::Signal*  ____signal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InvertSignal, ____signal) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InvertSignal, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InvertSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InvertSignal*, "VROSC", "InvertSignal");
