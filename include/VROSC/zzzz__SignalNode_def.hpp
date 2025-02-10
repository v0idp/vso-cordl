#pragma once
// IWYU pragma private; include "VROSC/SignalNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Node_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalNode)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class SignalNode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SignalNode);
// Dependencies VROSC.Node
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SignalNode
class CORDL_TYPE SignalNode : public ::VROSC::Node {
public:
// Declarations
 __declspec(property(get=get_MaxInputs)) int32_t  MaxInputs;

 __declspec(property(get=get_RequireOrigin)) bool  RequireOrigin;

/// @brief Field _blockPassOnThisFrame, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__blockPassOnThisFrame, put=__cordl_internal_set__blockPassOnThisFrame)) bool  _blockPassOnThisFrame;

/// @brief Field _bypass, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _cachedSignal, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedSignal, put=__cordl_internal_set__cachedSignal)) ::VROSC::Signal*  _cachedSignal;

/// @brief Field _nodeProcessingSignal, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__nodeProcessingSignal, put=__cordl_internal_set__nodeProcessingSignal)) bool  _nodeProcessingSignal;

/// @brief Field _output, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _output;

/// @brief Field _receivedSignalsThisFrame, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__receivedSignalsThisFrame, put=__cordl_internal_set__receivedSignalsThisFrame)) int32_t  _receivedSignalsThisFrame;

/// @brief Method LateUpdate, addr 0x17212dc, size 0x4c, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::SignalNode* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1721328, size 0x4, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1720548, size 0x4, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x172132c, size 0x4, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method OnDisable, addr 0x171da34, size 0x40, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17211f8, size 0x8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PassOnSignal, addr 0x171f05c, size 0xe0, virtual false, abstract: false, final false
inline void PassOnSignal(::VROSC::Signal*  signal) ;

/// @brief Method ReceiveSignal, addr 0x1721200, size 0xdc, virtual true, abstract: false, final false
inline void ReceiveSignal(::VROSC::Signal*  signal) ;

constexpr bool const& __cordl_internal_get__blockPassOnThisFrame() const;

constexpr bool& __cordl_internal_get__blockPassOnThisFrame() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr ::VROSC::Signal* const& __cordl_internal_get__cachedSignal() const;

constexpr ::VROSC::Signal*& __cordl_internal_get__cachedSignal() ;

constexpr bool const& __cordl_internal_get__nodeProcessingSignal() const;

constexpr bool& __cordl_internal_get__nodeProcessingSignal() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__output() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__output() ;

constexpr int32_t const& __cordl_internal_get__receivedSignalsThisFrame() const;

constexpr int32_t& __cordl_internal_get__receivedSignalsThisFrame() ;

constexpr void __cordl_internal_set__blockPassOnThisFrame(bool  value) ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__cachedSignal(::VROSC::Signal*  value) ;

constexpr void __cordl_internal_set__nodeProcessingSignal(bool  value) ;

constexpr void __cordl_internal_set__output(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__receivedSignalsThisFrame(int32_t  value) ;

/// @brief Method .ctor, addr 0x171a714, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxInputs, addr 0x17211e8, size 0x8, virtual true, abstract: false, final false
inline int32_t get_MaxInputs() ;

/// @brief Method get_RequireOrigin, addr 0x17211f0, size 0x8, virtual true, abstract: false, final false
inline bool get_RequireOrigin() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignalNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignalNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalNode(SignalNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalNode(SignalNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{977};

/// @brief Field _bypass, offset: 0x20, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field _output, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____output;

/// @brief Field _blockPassOnThisFrame, offset: 0x30, size: 0x1, def value: None
 bool  ____blockPassOnThisFrame;

/// @brief Field _receivedSignalsThisFrame, offset: 0x34, size: 0x4, def value: None
 int32_t  ____receivedSignalsThisFrame;

/// @brief Field _nodeProcessingSignal, offset: 0x38, size: 0x1, def value: None
 bool  ____nodeProcessingSignal;

/// @brief Field _cachedSignal, offset: 0x40, size: 0x8, def value: None
 ::VROSC::Signal*  ____cachedSignal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SignalNode, ____bypass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalNode, ____output) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalNode, ____blockPassOnThisFrame) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalNode, ____receivedSignalsThisFrame) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalNode, ____nodeProcessingSignal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalNode, ____cachedSignal) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SignalNode, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SignalNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalNode*, "VROSC", "SignalNode");
