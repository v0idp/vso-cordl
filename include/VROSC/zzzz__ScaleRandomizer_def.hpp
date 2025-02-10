#pragma once
// IWYU pragma private; include "VROSC/ScaleRandomizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleRandomizer)
namespace VROSC {
class NoteNode;
}
namespace VROSC {
class ScaleNode;
}
namespace VROSC {
class ScaleRandomizer_RandomTarget;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class ScaleRandomizer;
}
namespace VROSC {
class ScaleRandomizer_RandomTarget;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScaleRandomizer);
MARK_REF_PTR_T(::VROSC::ScaleRandomizer_RandomTarget);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleRandomizer/RandomTarget
class CORDL_TYPE ScaleRandomizer_RandomTarget : public ::System::Object {
public:
// Declarations
/// @brief Field Base, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Base, put=__cordl_internal_set_Base)) ::UnityW<::VROSC::NoteNode>  Base;

/// @brief Field ChanceToKeepBase, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ChanceToKeepBase, put=__cordl_internal_set_ChanceToKeepBase)) float_t  ChanceToKeepBase;

/// @brief Field MaxDropNotes, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxDropNotes, put=__cordl_internal_set_MaxDropNotes)) int32_t  MaxDropNotes;

/// @brief Field MinDropNotes, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinDropNotes, put=__cordl_internal_set_MinDropNotes)) int32_t  MinDropNotes;

/// @brief Field Scale, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) ::UnityW<::VROSC::ScaleNode>  Scale;

static inline ::VROSC::ScaleRandomizer_RandomTarget* New_ctor() ;

constexpr ::UnityW<::VROSC::NoteNode> const& __cordl_internal_get_Base() const;

constexpr ::UnityW<::VROSC::NoteNode>& __cordl_internal_get_Base() ;

constexpr float_t const& __cordl_internal_get_ChanceToKeepBase() const;

constexpr float_t& __cordl_internal_get_ChanceToKeepBase() ;

constexpr int32_t const& __cordl_internal_get_MaxDropNotes() const;

constexpr int32_t& __cordl_internal_get_MaxDropNotes() ;

constexpr int32_t const& __cordl_internal_get_MinDropNotes() const;

constexpr int32_t& __cordl_internal_get_MinDropNotes() ;

constexpr ::UnityW<::VROSC::ScaleNode> const& __cordl_internal_get_Scale() const;

constexpr ::UnityW<::VROSC::ScaleNode>& __cordl_internal_get_Scale() ;

constexpr void __cordl_internal_set_Base(::UnityW<::VROSC::NoteNode>  value) ;

constexpr void __cordl_internal_set_ChanceToKeepBase(float_t  value) ;

constexpr void __cordl_internal_set_MaxDropNotes(int32_t  value) ;

constexpr void __cordl_internal_set_MinDropNotes(int32_t  value) ;

constexpr void __cordl_internal_set_Scale(::UnityW<::VROSC::ScaleNode>  value) ;

/// @brief Method .ctor, addr 0x1720480, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleRandomizer_RandomTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleRandomizer_RandomTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleRandomizer_RandomTarget(ScaleRandomizer_RandomTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleRandomizer_RandomTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleRandomizer_RandomTarget(ScaleRandomizer_RandomTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{969};

/// @brief Field Scale, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::ScaleNode>  ___Scale;

/// @brief Field Base, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteNode>  ___Base;

/// @brief Field ChanceToKeepBase, offset: 0x20, size: 0x4, def value: None
 float_t  ___ChanceToKeepBase;

/// @brief Field MinDropNotes, offset: 0x24, size: 0x4, def value: None
 int32_t  ___MinDropNotes;

/// @brief Field MaxDropNotes, offset: 0x28, size: 0x4, def value: None
 int32_t  ___MaxDropNotes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScaleRandomizer_RandomTarget, ___Scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRandomizer_RandomTarget, ___Base) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRandomizer_RandomTarget, ___ChanceToKeepBase) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRandomizer_RandomTarget, ___MinDropNotes) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleRandomizer_RandomTarget, ___MaxDropNotes) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScaleRandomizer_RandomTarget, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleRandomizer
class CORDL_TYPE ScaleRandomizer : public ::VROSC::SignalNode {
public:
// Declarations
using RandomTarget = ::VROSC::ScaleRandomizer_RandomTarget;

/// @brief Field _randomTargets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__randomTargets, put=__cordl_internal_set__randomTargets)) ::ArrayW<::VROSC::ScaleRandomizer_RandomTarget*,::Array<::VROSC::ScaleRandomizer_RandomTarget*>*>  _randomTargets;

static inline ::VROSC::ScaleRandomizer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1720280, size 0x1f8, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

constexpr ::ArrayW<::VROSC::ScaleRandomizer_RandomTarget*,::Array<::VROSC::ScaleRandomizer_RandomTarget*>*> const& __cordl_internal_get__randomTargets() const;

constexpr ::ArrayW<::VROSC::ScaleRandomizer_RandomTarget*,::Array<::VROSC::ScaleRandomizer_RandomTarget*>*>& __cordl_internal_get__randomTargets() ;

constexpr void __cordl_internal_set__randomTargets(::ArrayW<::VROSC::ScaleRandomizer_RandomTarget*,::Array<::VROSC::ScaleRandomizer_RandomTarget*>*>  value) ;

/// @brief Method .ctor, addr 0x1720478, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleRandomizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleRandomizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleRandomizer(ScaleRandomizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleRandomizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleRandomizer(ScaleRandomizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{970};

/// @brief Field _randomTargets, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::VROSC::ScaleRandomizer_RandomTarget*,::Array<::VROSC::ScaleRandomizer_RandomTarget*>*>  ____randomTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScaleRandomizer, ____randomTargets) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScaleRandomizer, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScaleRandomizer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleRandomizer*, "VROSC", "ScaleRandomizer");
NEED_NO_BOX(::VROSC::ScaleRandomizer_RandomTarget);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleRandomizer_RandomTarget*, "VROSC", "ScaleRandomizer/RandomTarget");
