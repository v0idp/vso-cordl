#pragma once
// IWYU pragma private; include "DG/Tweening/DOTweenCYInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DOTweenCYInstruction)
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForCompletion;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForElapsedLoops;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForKill;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForPosition;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForRewind;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForStart;
}
namespace DG::Tweening {
class Tween;
}
// Forward declare root types
namespace DG::Tweening {
class DOTweenCYInstruction;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForCompletion;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForElapsedLoops;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForKill;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForPosition;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForRewind;
}
namespace DG::Tweening {
class DOTweenCYInstruction_WaitForStart;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOTweenCYInstruction);
MARK_REF_PTR_T(::DG::Tweening::DOTweenCYInstruction_WaitForCompletion);
MARK_REF_PTR_T(::DG::Tweening::DOTweenCYInstruction_WaitForElapsedLoops);
MARK_REF_PTR_T(::DG::Tweening::DOTweenCYInstruction_WaitForKill);
MARK_REF_PTR_T(::DG::Tweening::DOTweenCYInstruction_WaitForPosition);
MARK_REF_PTR_T(::DG::Tweening::DOTweenCYInstruction_WaitForRewind);
MARK_REF_PTR_T(::DG::Tweening::DOTweenCYInstruction_WaitForStart);
// Dependencies UnityEngine.CustomYieldInstruction
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenCYInstruction/WaitForCompletion
class CORDL_TYPE DOTweenCYInstruction_WaitForCompletion : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
 __declspec(property(get=get_keepWaiting)) bool  keepWaiting;

/// @brief Field t, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

static inline ::DG::Tweening::DOTweenCYInstruction_WaitForCompletion* New_ctor(::DG::Tweening::Tween*  tween) ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x16b5418, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::DG::Tweening::Tween*  tween) ;

/// @brief Method get_keepWaiting, addr 0x16b5d4c, size 0x30, virtual true, abstract: false, final false
inline bool get_keepWaiting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenCYInstruction_WaitForCompletion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForCompletion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenCYInstruction_WaitForCompletion(DOTweenCYInstruction_WaitForCompletion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForCompletion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenCYInstruction_WaitForCompletion(DOTweenCYInstruction_WaitForCompletion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11800};

/// @brief Field t, offset: 0x10, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenCYInstruction_WaitForCompletion, ___t) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenCYInstruction_WaitForCompletion, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies UnityEngine.CustomYieldInstruction
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenCYInstruction/WaitForRewind
class CORDL_TYPE DOTweenCYInstruction_WaitForRewind : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
 __declspec(property(get=get_keepWaiting)) bool  keepWaiting;

/// @brief Field t, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

static inline ::DG::Tweening::DOTweenCYInstruction_WaitForRewind* New_ctor(::DG::Tweening::Tween*  tween) ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x16b54fc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::DG::Tweening::Tween*  tween) ;

/// @brief Method get_keepWaiting, addr 0x16b5d7c, size 0x60, virtual true, abstract: false, final false
inline bool get_keepWaiting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenCYInstruction_WaitForRewind() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForRewind", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenCYInstruction_WaitForRewind(DOTweenCYInstruction_WaitForRewind && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForRewind", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenCYInstruction_WaitForRewind(DOTweenCYInstruction_WaitForRewind const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11801};

/// @brief Field t, offset: 0x10, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenCYInstruction_WaitForRewind, ___t) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenCYInstruction_WaitForRewind, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies UnityEngine.CustomYieldInstruction
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenCYInstruction/WaitForKill
class CORDL_TYPE DOTweenCYInstruction_WaitForKill : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
 __declspec(property(get=get_keepWaiting)) bool  keepWaiting;

/// @brief Field t, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

static inline ::DG::Tweening::DOTweenCYInstruction_WaitForKill* New_ctor(::DG::Tweening::Tween*  tween) ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x16b55e0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::DG::Tweening::Tween*  tween) ;

/// @brief Method get_keepWaiting, addr 0x16b5ddc, size 0x1c, virtual true, abstract: false, final false
inline bool get_keepWaiting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenCYInstruction_WaitForKill() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForKill", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenCYInstruction_WaitForKill(DOTweenCYInstruction_WaitForKill && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForKill", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenCYInstruction_WaitForKill(DOTweenCYInstruction_WaitForKill const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11802};

/// @brief Field t, offset: 0x10, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenCYInstruction_WaitForKill, ___t) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenCYInstruction_WaitForKill, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies UnityEngine.CustomYieldInstruction
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops
class CORDL_TYPE DOTweenCYInstruction_WaitForElapsedLoops : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
/// @brief Field elapsedLoops, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsedLoops, put=__cordl_internal_set_elapsedLoops)) int32_t  elapsedLoops;

 __declspec(property(get=get_keepWaiting)) bool  keepWaiting;

/// @brief Field t, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

static inline ::DG::Tweening::DOTweenCYInstruction_WaitForElapsedLoops* New_ctor(::DG::Tweening::Tween*  tween, int32_t  elapsedLoops) ;

constexpr int32_t const& __cordl_internal_get_elapsedLoops() const;

constexpr int32_t& __cordl_internal_get_elapsedLoops() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set_elapsedLoops(int32_t  value) ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x16b56cc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::DG::Tweening::Tween*  tween, int32_t  elapsedLoops) ;

/// @brief Method get_keepWaiting, addr 0x16b5df8, size 0x40, virtual true, abstract: false, final false
inline bool get_keepWaiting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenCYInstruction_WaitForElapsedLoops() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForElapsedLoops", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenCYInstruction_WaitForElapsedLoops(DOTweenCYInstruction_WaitForElapsedLoops && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForElapsedLoops", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenCYInstruction_WaitForElapsedLoops(DOTweenCYInstruction_WaitForElapsedLoops const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11803};

/// @brief Field t, offset: 0x10, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

/// @brief Field elapsedLoops, offset: 0x18, size: 0x4, def value: None
 int32_t  ___elapsedLoops;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenCYInstruction_WaitForElapsedLoops, ___t) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenCYInstruction_WaitForElapsedLoops, ___elapsedLoops) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenCYInstruction_WaitForElapsedLoops, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies UnityEngine.CustomYieldInstruction
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenCYInstruction/WaitForPosition
class CORDL_TYPE DOTweenCYInstruction_WaitForPosition : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
 __declspec(property(get=get_keepWaiting)) bool  keepWaiting;

/// @brief Field position, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) float_t  position;

/// @brief Field t, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

static inline ::DG::Tweening::DOTweenCYInstruction_WaitForPosition* New_ctor(::DG::Tweening::Tween*  tween, float_t  position) ;

constexpr float_t const& __cordl_internal_get_position() const;

constexpr float_t& __cordl_internal_get_position() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set_position(float_t  value) ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x16b57c8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::DG::Tweening::Tween*  tween, float_t  position) ;

/// @brief Method get_keepWaiting, addr 0x16b5e38, size 0x58, virtual true, abstract: false, final false
inline bool get_keepWaiting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenCYInstruction_WaitForPosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForPosition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenCYInstruction_WaitForPosition(DOTweenCYInstruction_WaitForPosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForPosition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenCYInstruction_WaitForPosition(DOTweenCYInstruction_WaitForPosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11804};

/// @brief Field t, offset: 0x10, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

/// @brief Field position, offset: 0x18, size: 0x4, def value: None
 float_t  ___position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenCYInstruction_WaitForPosition, ___t) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenCYInstruction_WaitForPosition, ___position) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenCYInstruction_WaitForPosition, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies UnityEngine.CustomYieldInstruction
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenCYInstruction/WaitForStart
class CORDL_TYPE DOTweenCYInstruction_WaitForStart : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
 __declspec(property(get=get_keepWaiting)) bool  keepWaiting;

/// @brief Field t, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

static inline ::DG::Tweening::DOTweenCYInstruction_WaitForStart* New_ctor(::DG::Tweening::Tween*  tween) ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x16b58bc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::DG::Tweening::Tween*  tween) ;

/// @brief Method get_keepWaiting, addr 0x16b5e90, size 0x34, virtual true, abstract: false, final false
inline bool get_keepWaiting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenCYInstruction_WaitForStart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForStart", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenCYInstruction_WaitForStart(DOTweenCYInstruction_WaitForStart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction_WaitForStart", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenCYInstruction_WaitForStart(DOTweenCYInstruction_WaitForStart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11805};

/// @brief Field t, offset: 0x10, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenCYInstruction_WaitForStart, ___t) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenCYInstruction_WaitForStart, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenCYInstruction
class CORDL_TYPE DOTweenCYInstruction : public ::System::Object {
public:
// Declarations
using WaitForCompletion = ::DG::Tweening::DOTweenCYInstruction_WaitForCompletion;

using WaitForElapsedLoops = ::DG::Tweening::DOTweenCYInstruction_WaitForElapsedLoops;

using WaitForKill = ::DG::Tweening::DOTweenCYInstruction_WaitForKill;

using WaitForPosition = ::DG::Tweening::DOTweenCYInstruction_WaitForPosition;

using WaitForRewind = ::DG::Tweening::DOTweenCYInstruction_WaitForRewind;

using WaitForStart = ::DG::Tweening::DOTweenCYInstruction_WaitForStart;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenCYInstruction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenCYInstruction(DOTweenCYInstruction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenCYInstruction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenCYInstruction(DOTweenCYInstruction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenCYInstruction, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOTweenCYInstruction);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenCYInstruction*, "DG.Tweening", "DOTweenCYInstruction");
NEED_NO_BOX(::DG::Tweening::DOTweenCYInstruction_WaitForCompletion);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenCYInstruction_WaitForCompletion*, "DG.Tweening", "DOTweenCYInstruction/WaitForCompletion");
NEED_NO_BOX(::DG::Tweening::DOTweenCYInstruction_WaitForElapsedLoops);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenCYInstruction_WaitForElapsedLoops*, "DG.Tweening", "DOTweenCYInstruction/WaitForElapsedLoops");
NEED_NO_BOX(::DG::Tweening::DOTweenCYInstruction_WaitForKill);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenCYInstruction_WaitForKill*, "DG.Tweening", "DOTweenCYInstruction/WaitForKill");
NEED_NO_BOX(::DG::Tweening::DOTweenCYInstruction_WaitForPosition);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenCYInstruction_WaitForPosition*, "DG.Tweening", "DOTweenCYInstruction/WaitForPosition");
NEED_NO_BOX(::DG::Tweening::DOTweenCYInstruction_WaitForRewind);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenCYInstruction_WaitForRewind*, "DG.Tweening", "DOTweenCYInstruction/WaitForRewind");
NEED_NO_BOX(::DG::Tweening::DOTweenCYInstruction_WaitForStart);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenCYInstruction_WaitForStart*, "DG.Tweening", "DOTweenCYInstruction/WaitForStart");
