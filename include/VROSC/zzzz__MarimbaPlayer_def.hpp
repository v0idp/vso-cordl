#pragma once
// IWYU pragma private; include "VROSC/MarimbaPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__NotePlayer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MarimbaPlayer)
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class MarimbaPad;
}
namespace VROSC {
class Marimba;
}
namespace VROSC {
class Signal;
}
namespace VROSC {
class SynthController;
}
// Forward declare root types
namespace VROSC {
class MarimbaPlayer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MarimbaPlayer);
// Dependencies VROSC.NotePlayer
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaPlayer
class CORDL_TYPE MarimbaPlayer : public ::VROSC::NotePlayer {
public:
// Declarations
/// @brief Field _buttonSustaining, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__buttonSustaining, put=__cordl_internal_set__buttonSustaining)) bool  _buttonSustaining;

/// @brief Field _lastSustainedDevice, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSustainedDevice, put=__cordl_internal_set__lastSustainedDevice)) ::UnityW<::VROSC::InputDevice>  _lastSustainedDevice;

/// @brief Field _marimba, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__marimba, put=__cordl_internal_set__marimba)) ::UnityW<::VROSC::Marimba>  _marimba;

/// @brief Field _minSustainTime, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__minSustainTime, put=__cordl_internal_set__minSustainTime)) float_t  _minSustainTime;

/// @brief Field _pad, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pad, put=__cordl_internal_set__pad)) ::UnityW<::VROSC::MarimbaPad>  _pad;

/// @brief Field _sustainCollider, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__sustainCollider, put=__cordl_internal_set__sustainCollider)) ::UnityW<::UnityEngine::BoxCollider>  _sustainCollider;

/// @brief Field _sustainTimer, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__sustainTimer, put=__cordl_internal_set__sustainTimer)) float_t  _sustainTimer;

/// @brief Field _sustainedDevice, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sustainedDevice, put=__cordl_internal_set__sustainedDevice)) ::UnityW<::VROSC::InputDevice>  _sustainedDevice;

/// @brief Field _sustainedSignal, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sustainedSignal, put=__cordl_internal_set__sustainedSignal)) ::VROSC::Signal*  _sustainedSignal;

/// @brief Field _synthController, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__synthController, put=__cordl_internal_set__synthController)) ::UnityW<::VROSC::SynthController>  _synthController;

/// @brief Method Awake, addr 0x171d4ac, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckSustain, addr 0x171d678, size 0x248, virtual false, abstract: false, final false
inline void CheckSustain() ;

/// @brief Method GetNote, addr 0x171dc0c, size 0x50, virtual true, abstract: false, final false
inline int32_t GetNote(::UnityEngine::Vector3  position) ;

/// @brief Method GetNotes, addr 0x171e008, size 0x34, virtual true, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetNotes(::UnityEngine::Vector3  position) ;

static inline ::VROSC::MarimbaPlayer* New_ctor() ;

/// @brief Method NodeBegin, addr 0x171da98, size 0x16c, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x171dc08, size 0x4, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x171dc04, size 0x4, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method OnDisable, addr 0x171d918, size 0x44, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method PlayNote, addr 0x171dc5c, size 0x268, virtual true, abstract: false, final false
inline void PlayNote(int32_t  note, float_t  velocity, double_t  predictedDspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume) ;

/// @brief Method Setup, addr 0x171d524, size 0xe0, virtual false, abstract: false, final false
inline void Setup(::VROSC::Marimba*  padSpawner, ::VROSC::MarimbaPad*  pad, ::VROSC::InstrumentController*  instrument, ::UnityEngine::BoxCollider*  sustainCollider) ;

/// @brief Method StopAndReset, addr 0x171d95c, size 0xd8, virtual false, abstract: false, final false
inline void StopAndReset() ;

/// @brief Method StopNote, addr 0x171dec4, size 0x144, virtual true, abstract: false, final false
inline void StopNote(int32_t  note, ::VROSC::HandType  handType) ;

/// @brief Method Update, addr 0x171d604, size 0x74, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateParameters, addr 0x171da74, size 0x24, virtual false, abstract: false, final false
inline void UpdateParameters() ;

constexpr bool const& __cordl_internal_get__buttonSustaining() const;

constexpr bool& __cordl_internal_get__buttonSustaining() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__lastSustainedDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__lastSustainedDevice() ;

constexpr ::UnityW<::VROSC::Marimba> const& __cordl_internal_get__marimba() const;

constexpr ::UnityW<::VROSC::Marimba>& __cordl_internal_get__marimba() ;

constexpr float_t const& __cordl_internal_get__minSustainTime() const;

constexpr float_t& __cordl_internal_get__minSustainTime() ;

constexpr ::UnityW<::VROSC::MarimbaPad> const& __cordl_internal_get__pad() const;

constexpr ::UnityW<::VROSC::MarimbaPad>& __cordl_internal_get__pad() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get__sustainCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get__sustainCollider() ;

constexpr float_t const& __cordl_internal_get__sustainTimer() const;

constexpr float_t& __cordl_internal_get__sustainTimer() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__sustainedDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__sustainedDevice() ;

constexpr ::VROSC::Signal* const& __cordl_internal_get__sustainedSignal() const;

constexpr ::VROSC::Signal*& __cordl_internal_get__sustainedSignal() ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__synthController() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__synthController() ;

constexpr void __cordl_internal_set__buttonSustaining(bool  value) ;

constexpr void __cordl_internal_set__lastSustainedDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__marimba(::UnityW<::VROSC::Marimba>  value) ;

constexpr void __cordl_internal_set__minSustainTime(float_t  value) ;

constexpr void __cordl_internal_set__pad(::UnityW<::VROSC::MarimbaPad>  value) ;

constexpr void __cordl_internal_set__sustainCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set__sustainTimer(float_t  value) ;

constexpr void __cordl_internal_set__sustainedDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__sustainedSignal(::VROSC::Signal*  value) ;

constexpr void __cordl_internal_set__synthController(::UnityW<::VROSC::SynthController>  value) ;

/// @brief Method .ctor, addr 0x171e03c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarimbaPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaPlayer(MarimbaPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaPlayer(MarimbaPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{957};

/// @brief Field _sustainCollider, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ____sustainCollider;

/// @brief Field _sustainedDevice, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____sustainedDevice;

/// @brief Field _lastSustainedDevice, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____lastSustainedDevice;

/// @brief Field _synthController, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____synthController;

/// @brief Field _marimba, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::VROSC::Marimba>  ____marimba;

/// @brief Field _pad, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::VROSC::MarimbaPad>  ____pad;

/// @brief Field _minSustainTime, offset: 0xd0, size: 0x4, def value: None
 float_t  ____minSustainTime;

/// @brief Field _sustainTimer, offset: 0xd4, size: 0x4, def value: None
 float_t  ____sustainTimer;

/// @brief Field _sustainedSignal, offset: 0xd8, size: 0x8, def value: None
 ::VROSC::Signal*  ____sustainedSignal;

/// @brief Field _buttonSustaining, offset: 0xe0, size: 0x1, def value: None
 bool  ____buttonSustaining;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MarimbaPlayer, ____sustainCollider) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPlayer, ____sustainedDevice) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPlayer, ____lastSustainedDevice) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPlayer, ____synthController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPlayer, ____marimba) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPlayer, ____pad) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPlayer, ____minSustainTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPlayer, ____sustainTimer) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPlayer, ____sustainedSignal) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MarimbaPlayer, ____buttonSustaining) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaPlayer, 0xe8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MarimbaPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaPlayer*, "VROSC", "MarimbaPlayer");
