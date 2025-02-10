#pragma once
// IWYU pragma private; include "VROSC/CurrentlyRecordingLoopVisualization.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CurrentlyRecordingLoopVisualization)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
class WaveformVisualizer;
}
// Forward declare root types
namespace VROSC {
class CurrentlyRecordingLoopVisualization;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CurrentlyRecordingLoopVisualization);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CurrentlyRecordingLoopVisualization
class CORDL_TYPE CurrentlyRecordingLoopVisualization : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audio, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__audio, put=__cordl_internal_set__audio)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _audio;

/// @brief Field _color, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Field _lengthInSeconds, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__lengthInSeconds, put=__cordl_internal_set__lengthInSeconds)) float_t  _lengthInSeconds;

/// @brief Field _normalizedOffset, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__normalizedOffset, put=__cordl_internal_set__normalizedOffset)) float_t  _normalizedOffset;

/// @brief Field _propBlock, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Field _recordingStartTime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingStartTime, put=__cordl_internal_set__recordingStartTime)) double_t  _recordingStartTime;

/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _visualizer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__visualizer, put=__cordl_internal_set__visualizer)) ::UnityW<::VROSC::WaveformVisualizer>  _visualizer;

/// @brief Method Awake, addr 0x18a71c0, size 0x44, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreatePropBlock, addr 0x18a7204, size 0xc8, virtual false, abstract: false, final false
inline void CreatePropBlock() ;

/// @brief Method GetElapsedRecordingTime, addr 0x18a7488, size 0x24, virtual false, abstract: false, final false
inline float_t GetElapsedRecordingTime() ;

static inline ::VROSC::CurrentlyRecordingLoopVisualization* New_ctor() ;

/// @brief Method StartVisualization, addr 0x18a72cc, size 0xb4, virtual false, abstract: false, final false
inline void StartVisualization(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio, float_t  lengthInSeconds, float_t  normalizedOffset) ;

/// @brief Method StopVisualization, addr 0x18a74ac, size 0x24, virtual false, abstract: false, final false
inline void StopVisualization() ;

/// @brief Method Update, addr 0x18a7380, size 0x108, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get__audio() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get__audio() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr float_t const& __cordl_internal_get__lengthInSeconds() const;

constexpr float_t& __cordl_internal_get__lengthInSeconds() ;

constexpr float_t const& __cordl_internal_get__normalizedOffset() const;

constexpr float_t& __cordl_internal_get__normalizedOffset() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr double_t const& __cordl_internal_get__recordingStartTime() const;

constexpr double_t& __cordl_internal_get__recordingStartTime() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityW<::VROSC::WaveformVisualizer> const& __cordl_internal_get__visualizer() const;

constexpr ::UnityW<::VROSC::WaveformVisualizer>& __cordl_internal_get__visualizer() ;

constexpr void __cordl_internal_set__audio(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__lengthInSeconds(float_t  value) ;

constexpr void __cordl_internal_set__normalizedOffset(float_t  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__recordingStartTime(double_t  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__visualizer(::UnityW<::VROSC::WaveformVisualizer>  value) ;

/// @brief Method .ctor, addr 0x18a74d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrentlyRecordingLoopVisualization() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrentlyRecordingLoopVisualization", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrentlyRecordingLoopVisualization(CurrentlyRecordingLoopVisualization && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrentlyRecordingLoopVisualization", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrentlyRecordingLoopVisualization(CurrentlyRecordingLoopVisualization const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{697};

/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _visualizer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::WaveformVisualizer>  ____visualizer;

/// @brief Field _color, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _propBlock, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

/// @brief Field _recordingStartTime, offset: 0x48, size: 0x8, def value: None
 double_t  ____recordingStartTime;

/// @brief Field _audio, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ____audio;

/// @brief Field _lengthInSeconds, offset: 0x58, size: 0x4, def value: None
 float_t  ____lengthInSeconds;

/// @brief Field _normalizedOffset, offset: 0x5c, size: 0x4, def value: None
 float_t  ____normalizedOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CurrentlyRecordingLoopVisualization, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopVisualization, ____visualizer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopVisualization, ____color) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopVisualization, ____propBlock) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopVisualization, ____recordingStartTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopVisualization, ____audio) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopVisualization, ____lengthInSeconds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopVisualization, ____normalizedOffset) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CurrentlyRecordingLoopVisualization, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CurrentlyRecordingLoopVisualization);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CurrentlyRecordingLoopVisualization*, "VROSC", "CurrentlyRecordingLoopVisualization");
