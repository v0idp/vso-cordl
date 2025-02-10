#pragma once
// IWYU pragma private; include "VROSC/SignalAnd.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SignalAnd)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class SignalAnd;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SignalAnd);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SignalAnd
class CORDL_TYPE SignalAnd : public ::VROSC::SignalNode {
public:
// Declarations
 __declspec(property(get=get_MaxInputs)) int32_t  MaxInputs;

/// @brief Field _cachedFirstValue, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedFirstValue, put=__cordl_internal_set__cachedFirstValue)) float_t  _cachedFirstValue;

static inline ::VROSC::SignalAnd* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1721a04, size 0x4, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1721a5c, size 0x4, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1721a58, size 0x4, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method TransformValue, addr 0x1721a08, size 0x50, virtual false, abstract: false, final false
inline ::VROSC::Signal* TransformValue(::VROSC::Signal*  signal) ;

constexpr float_t const& __cordl_internal_get__cachedFirstValue() const;

constexpr float_t& __cordl_internal_get__cachedFirstValue() ;

constexpr void __cordl_internal_set__cachedFirstValue(float_t  value) ;

/// @brief Method .ctor, addr 0x1721a60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxInputs, addr 0x17219fc, size 0x8, virtual true, abstract: false, final false
inline int32_t get_MaxInputs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignalAnd() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignalAnd", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalAnd(SignalAnd && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalAnd", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalAnd(SignalAnd const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{990};

/// @brief Field _cachedFirstValue, offset: 0x48, size: 0x4, def value: None
 float_t  ____cachedFirstValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SignalAnd, ____cachedFirstValue) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SignalAnd, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SignalAnd);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalAnd*, "VROSC", "SignalAnd");
