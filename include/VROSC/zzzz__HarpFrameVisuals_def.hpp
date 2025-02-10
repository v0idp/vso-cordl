#pragma once
// IWYU pragma private; include "VROSC/HarpFrameVisuals.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__FrameVisuals_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HarpFrameVisuals)
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector4;
}
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
class NoteFieldData;
}
namespace VROSC {
class NoteFieldParameters;
}
// Forward declare root types
namespace VROSC {
class HarpFrameVisuals;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HarpFrameVisuals);
// Dependencies UnityEngine.Color, VROSC.FrameVisuals
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HarpFrameVisuals
class CORDL_TYPE HarpFrameVisuals : public ::VROSC::FrameVisuals {
public:
// Declarations
/// @brief Field _currentFlowColors, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentFlowColors, put=__cordl_internal_set__currentFlowColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _currentFlowColors;

/// @brief Field _flowAsVectorsCached, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__flowAsVectorsCached, put=__cordl_internal_set__flowAsVectorsCached)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  _flowAsVectorsCached;

/// @brief Field _flowColors, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__flowColors, put=__cordl_internal_set__flowColors)) ::System::Object*  _flowColors;

/// @brief Field _fractures, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__fractures, put=__cordl_internal_set__fractures)) ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  _fractures;

/// @brief Field _lastFlowMove, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastFlowMove, put=__cordl_internal_set__lastFlowMove)) float_t  _lastFlowMove;

/// @brief Field _noteBoardNoteController, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteBoardNoteController, put=__cordl_internal_set__noteBoardNoteController)) ::UnityW<::VROSC::NoteBoardNoteController>  _noteBoardNoteController;

/// @brief Field _noteCount, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__noteCount, put=__cordl_internal_set__noteCount)) int32_t  _noteCount;

/// @brief Field _playingCached, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__playingCached, put=__cordl_internal_set__playingCached)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  _playingCached;

/// @brief Field _renderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _scaleWithVelocity, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__scaleWithVelocity, put=__cordl_internal_set__scaleWithVelocity)) bool  _scaleWithVelocity;

/// @brief Field _speed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Field _stringColors, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__stringColors, put=__cordl_internal_set__stringColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _stringColors;

/// @brief Field _x, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__x, put=__cordl_internal_set__x)) ::ArrayW<float_t,::Array<float_t>*>  _x;

/// @brief Field _xColor, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get__xColor, put=__cordl_internal_set__xColor)) ::UnityEngine::Color  _xColor;

/// @brief Field _z, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__z, put=__cordl_internal_set__z)) ::ArrayW<float_t,::Array<float_t>*>  _z;

/// @brief Field _zColor, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__zColor, put=__cordl_internal_set__zColor)) ::UnityEngine::Color  _zColor;

/// @brief Method Awake, addr 0x17adf7c, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MoveFlowColors, addr 0x17ae4cc, size 0xc4, virtual false, abstract: false, final false
inline void MoveFlowColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors) ;

static inline ::VROSC::HarpFrameVisuals* New_ctor() ;

/// @brief Method Update, addr 0x17ae150, size 0x35c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCount, addr 0x17ae054, size 0xfc, virtual false, abstract: false, final false
inline void UpdateCount(::VROSC::NoteFieldData*  data, ::VROSC::NoteFieldParameters*  noteFieldParameters) ;

/// @brief Method UpdateFlowColors, addr 0x17ae77c, size 0x90, virtual false, abstract: false, final false
inline void UpdateFlowColors() ;

/// @brief Method UpdatePlayingColors, addr 0x17ae720, size 0x5c, virtual false, abstract: false, final false
inline void UpdatePlayingColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors) ;

/// @brief Method UpdateRenderer, addr 0x17ae590, size 0x190, virtual false, abstract: false, final false
inline void UpdateRenderer(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  stringColors) ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__currentFlowColors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__currentFlowColors() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__flowAsVectorsCached() const;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__flowAsVectorsCached() ;

constexpr ::System::Object* const& __cordl_internal_get__flowColors() const;

constexpr ::System::Object*& __cordl_internal_get__flowColors() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get__fractures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>& __cordl_internal_get__fractures() ;

constexpr float_t const& __cordl_internal_get__lastFlowMove() const;

constexpr float_t& __cordl_internal_get__lastFlowMove() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get__noteBoardNoteController() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get__noteBoardNoteController() ;

constexpr int32_t const& __cordl_internal_get__noteCount() const;

constexpr int32_t& __cordl_internal_get__noteCount() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__playingCached() const;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__playingCached() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr bool const& __cordl_internal_get__scaleWithVelocity() const;

constexpr bool& __cordl_internal_get__scaleWithVelocity() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__stringColors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__stringColors() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__x() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__x() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__xColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__xColor() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__z() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__z() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__zColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__zColor() ;

constexpr void __cordl_internal_set__currentFlowColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__flowAsVectorsCached(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr void __cordl_internal_set__flowColors(::System::Object*  value) ;

constexpr void __cordl_internal_set__fractures(::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  value) ;

constexpr void __cordl_internal_set__lastFlowMove(float_t  value) ;

constexpr void __cordl_internal_set__noteBoardNoteController(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

constexpr void __cordl_internal_set__noteCount(int32_t  value) ;

constexpr void __cordl_internal_set__playingCached(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__scaleWithVelocity(bool  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

constexpr void __cordl_internal_set__stringColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__x(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__xColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__z(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__zColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17ae80c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HarpFrameVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HarpFrameVisuals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HarpFrameVisuals(HarpFrameVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HarpFrameVisuals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HarpFrameVisuals(HarpFrameVisuals const& ) = delete;

/// @brief Field _FlowX offset 0xffffffff size 0x4
static constexpr int32_t  _FlowX{static_cast<int32_t>(0x20)};

/// @brief Field _FlowY offset 0xffffffff size 0x4
static constexpr int32_t  _FlowY{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1427};

/// @brief Field _xColor, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ____xColor;

/// @brief Field _zColor, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ____zColor;

/// @brief Field _scaleWithVelocity, offset: 0x4c, size: 0x1, def value: None
 bool  ____scaleWithVelocity;

/// @brief Field _renderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _fractures, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>,::Array<::UnityW<::UnityEngine::Renderer>>*>  ____fractures;

/// @brief Field _speed, offset: 0x60, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _noteBoardNoteController, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  ____noteBoardNoteController;

/// @brief Field _flowColors, offset: 0x70, size: 0x8, def value: None
 ::System::Object*  ____flowColors;

/// @brief Field _lastFlowMove, offset: 0x78, size: 0x4, def value: None
 float_t  ____lastFlowMove;

/// @brief Field _noteCount, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____noteCount;

/// @brief Field _playingCached, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  ____playingCached;

/// @brief Field _flowAsVectorsCached, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  ____flowAsVectorsCached;

/// @brief Field _stringColors, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____stringColors;

/// @brief Field _currentFlowColors, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____currentFlowColors;

/// @brief Field _x, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____x;

/// @brief Field _z, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HarpFrameVisuals, ____xColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____zColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____scaleWithVelocity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____renderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____fractures) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____speed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____noteBoardNoteController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____flowColors) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____lastFlowMove) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____noteCount) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____playingCached) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____flowAsVectorsCached) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____stringColors) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____currentFlowColors) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____x) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::HarpFrameVisuals, ____z) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HarpFrameVisuals, 0xb0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HarpFrameVisuals);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HarpFrameVisuals*, "VROSC", "HarpFrameVisuals");
