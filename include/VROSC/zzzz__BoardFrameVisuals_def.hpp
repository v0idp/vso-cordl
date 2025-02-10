#pragma once
// IWYU pragma private; include "VROSC/BoardFrameVisuals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BoardFrameVisuals)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class BoardFrameNote;
}
namespace VROSC {
class NoteFieldMonitor;
}
// Forward declare root types
namespace VROSC {
class BoardFrameVisuals;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BoardFrameVisuals);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BoardFrameVisuals
class CORDL_TYPE BoardFrameVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _colors, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _colors;

/// @brief Field _monitor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__monitor, put=__cordl_internal_set__monitor)) ::UnityW<::VROSC::NoteFieldMonitor>  _monitor;

/// @brief Field _notes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__notes, put=__cordl_internal_set__notes)) ::ArrayW<::UnityW<::VROSC::BoardFrameNote>,::Array<::UnityW<::VROSC::BoardFrameNote>>*>  _notes;

/// @brief Field _playing, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__playing, put=__cordl_internal_set__playing)) ::ArrayW<int32_t,::Array<int32_t>*>  _playing;

/// @brief Method Assign, addr 0x17ad304, size 0x50, virtual false, abstract: false, final false
inline void Assign() ;

static inline ::VROSC::BoardFrameVisuals* New_ctor() ;

/// @brief Method Start, addr 0x17acec8, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x17acf70, size 0x394, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__colors() const;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__colors() ;

constexpr ::UnityW<::VROSC::NoteFieldMonitor> const& __cordl_internal_get__monitor() const;

constexpr ::UnityW<::VROSC::NoteFieldMonitor>& __cordl_internal_get__monitor() ;

constexpr ::ArrayW<::UnityW<::VROSC::BoardFrameNote>,::Array<::UnityW<::VROSC::BoardFrameNote>>*> const& __cordl_internal_get__notes() const;

constexpr ::ArrayW<::UnityW<::VROSC::BoardFrameNote>,::Array<::UnityW<::VROSC::BoardFrameNote>>*>& __cordl_internal_get__notes() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__playing() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__playing() ;

constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr void __cordl_internal_set__monitor(::UnityW<::VROSC::NoteFieldMonitor>  value) ;

constexpr void __cordl_internal_set__notes(::ArrayW<::UnityW<::VROSC::BoardFrameNote>,::Array<::UnityW<::VROSC::BoardFrameNote>>*>  value) ;

constexpr void __cordl_internal_set__playing(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

/// @brief Method .ctor, addr 0x17ad354, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoardFrameVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoardFrameVisuals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoardFrameVisuals(BoardFrameVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoardFrameVisuals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoardFrameVisuals(BoardFrameVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1423};

/// @brief Field _monitor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteFieldMonitor>  ____monitor;

/// @brief Field _notes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::BoardFrameNote>,::Array<::UnityW<::VROSC::BoardFrameNote>>*>  ____notes;

/// @brief Field _colors, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  ____colors;

/// @brief Field _playing, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____playing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BoardFrameVisuals, ____monitor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameVisuals, ____notes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameVisuals, ____colors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameVisuals, ____playing) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BoardFrameVisuals, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BoardFrameVisuals);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BoardFrameVisuals*, "VROSC", "BoardFrameVisuals");
