#pragma once
// IWYU pragma private; include "VROSC/FloatChanger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FloatChanger)
namespace VROSC {
class FloatNode;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class FloatChanger;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FloatChanger);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FloatChanger
class CORDL_TYPE FloatChanger : public ::VROSC::SignalNode {
public:
// Declarations
 __declspec(property(get=get_MaxInputs)) int32_t  MaxInputs;

/// @brief Field _continuous, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__continuous, put=__cordl_internal_set__continuous)) bool  _continuous;

/// @brief Field _outputNode, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputNode, put=__cordl_internal_set__outputNode)) ::UnityW<::VROSC::FloatNode>  _outputNode;

static inline ::VROSC::FloatChanger* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171a5e0, size 0x98, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x171a678, size 0x94, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method SetValueBySignal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetValueBySignal(::VROSC::Signal*  signal) ;

constexpr bool const& __cordl_internal_get__continuous() const;

constexpr bool& __cordl_internal_get__continuous() ;

constexpr ::UnityW<::VROSC::FloatNode> const& __cordl_internal_get__outputNode() const;

constexpr ::UnityW<::VROSC::FloatNode>& __cordl_internal_get__outputNode() ;

constexpr void __cordl_internal_set__continuous(bool  value) ;

constexpr void __cordl_internal_set__outputNode(::UnityW<::VROSC::FloatNode>  value) ;

/// @brief Method .ctor, addr 0x171a70c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxInputs, addr 0x171a5d8, size 0x8, virtual true, abstract: false, final false
inline int32_t get_MaxInputs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatChanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatChanger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatChanger(FloatChanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatChanger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatChanger(FloatChanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{926};

/// @brief Field _outputNode, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::FloatNode>  ____outputNode;

/// @brief Field _continuous, offset: 0x50, size: 0x1, def value: None
 bool  ____continuous;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FloatChanger, ____outputNode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FloatChanger, ____continuous) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FloatChanger, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FloatChanger);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FloatChanger*, "VROSC", "FloatChanger");
