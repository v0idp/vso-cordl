#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/AudioReactiveBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReactiveBehaviour)
namespace VROSC::AudioReactive {
struct AudioReactiveBehaviour_ReactiveBeat;
}
// Forward declare root types
namespace VROSC::AudioReactive {
struct AudioReactiveBehaviour_ReactiveBeat;
}
namespace VROSC::AudioReactive {
class AudioReactiveBehaviour;
}
// Write type traits
MARK_VAL_T(::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat);
MARK_REF_PTR_T(::VROSC::AudioReactive::AudioReactiveBehaviour);
// Dependencies 
namespace VROSC::AudioReactive {
// Is value type: true
// CS Name: VROSC.AudioReactive.AudioReactiveBehaviour/ReactiveBeat
struct CORDL_TYPE AudioReactiveBehaviour_ReactiveBeat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioReactiveBehaviour_ReactiveBeat_Unwrapped
enum struct __AudioReactiveBehaviour_ReactiveBeat_Unwrapped : int32_t {
__E_Beat1 = static_cast<int32_t>(0x1),
__E_Beat2 = static_cast<int32_t>(0x2),
__E_Beat3 = static_cast<int32_t>(0x4),
__E_Beat4 = static_cast<int32_t>(0x8),
__E_PlayerBass = static_cast<int32_t>(0x10),
__E_PlayerMid = static_cast<int32_t>(0x20),
__E_PlayerTop = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioReactiveBehaviour_ReactiveBeat_Unwrapped () const noexcept {
return static_cast<__AudioReactiveBehaviour_ReactiveBeat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioReactiveBehaviour_ReactiveBeat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioReactiveBehaviour_ReactiveBeat(int32_t  value__) noexcept;

/// @brief Field Beat1 value: I32(1)
static ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat const Beat1;

/// @brief Field Beat2 value: I32(2)
static ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat const Beat2;

/// @brief Field Beat3 value: I32(4)
static ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat const Beat3;

/// @brief Field Beat4 value: I32(8)
static ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat const Beat4;

/// @brief Field PlayerBass value: I32(16)
static ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat const PlayerBass;

/// @brief Field PlayerMid value: I32(32)
static ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat const PlayerMid;

/// @brief Field PlayerTop value: I32(64)
static ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat const PlayerTop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1534};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat, 0x4>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
// Dependencies UnityEngine.MonoBehaviour, VROSC.AudioReactive.AudioReactiveBehaviour::ReactiveBeat
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.AudioReactiveBehaviour
class CORDL_TYPE AudioReactiveBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ReactiveBeat = ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat;

/// @brief Field _coolDown, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__coolDown, put=__cordl_internal_set__coolDown)) int32_t  _coolDown;

/// @brief Field _onCoolDown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__onCoolDown, put=__cordl_internal_set__onCoolDown)) int32_t  _onCoolDown;

/// @brief Field _reactOn, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__reactOn, put=__cordl_internal_set__reactOn)) ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  _reactOn;

/// @brief Method Awake, addr 0x17d80b4, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FilterBeat, addr 0x17d82a8, size 0x44, virtual false, abstract: false, final false
inline void FilterBeat(int32_t  beat) ;

static inline ::VROSC::AudioReactive::AudioReactiveBehaviour* New_ctor() ;

/// @brief Method OnBeat, addr 0x17d82ec, size 0x4, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

/// @brief Method OnDisable, addr 0x17d81b0, size 0xf8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17d80b8, size 0xf8, virtual true, abstract: false, final false
inline void OnEnable() ;

constexpr int32_t const& __cordl_internal_get__coolDown() const;

constexpr int32_t& __cordl_internal_get__coolDown() ;

constexpr int32_t const& __cordl_internal_get__onCoolDown() const;

constexpr int32_t& __cordl_internal_get__onCoolDown() ;

constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat const& __cordl_internal_get__reactOn() const;

constexpr ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat& __cordl_internal_get__reactOn() ;

constexpr void __cordl_internal_set__coolDown(int32_t  value) ;

constexpr void __cordl_internal_set__onCoolDown(int32_t  value) ;

constexpr void __cordl_internal_set__reactOn(::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  value) ;

/// @brief Method .ctor, addr 0x17d82f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReactiveBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReactiveBehaviour(AudioReactiveBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReactiveBehaviour(AudioReactiveBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1535};

/// @brief Field _reactOn, offset: 0x20, size: 0x4, def value: None
 ::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat  ____reactOn;

/// @brief Field _coolDown, offset: 0x24, size: 0x4, def value: None
 int32_t  ____coolDown;

/// @brief Field _onCoolDown, offset: 0x28, size: 0x4, def value: None
 int32_t  ____onCoolDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveBehaviour, ____reactOn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveBehaviour, ____coolDown) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::AudioReactiveBehaviour, ____onCoolDown) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::AudioReactiveBehaviour, 0x30>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveBehaviour_ReactiveBeat, "VROSC.AudioReactive", "AudioReactiveBehaviour/ReactiveBeat");
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveBehaviour*, "VROSC.AudioReactive", "AudioReactiveBehaviour");
