#pragma once
// IWYU pragma private; include "DG/Tweening/Core/DOTweenComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/zzzz__IDOTweenInit_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DOTweenComponent)
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForCompletion_d__15;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForElapsedLoops_d__18;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForKill_d__17;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForPosition_d__19;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForRewind_d__16;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForStart_d__20;
}
namespace DG::Tweening {
class IDOTweenInit;
}
namespace DG::Tweening {
class Tween;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DG::Tweening::Core {
class DOTweenComponent;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForCompletion_d__15;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForElapsedLoops_d__18;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForKill_d__17;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForPosition_d__19;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForRewind_d__16;
}
namespace DG::Tweening::Core {
class DOTweenComponent__WaitForStart_d__20;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenComponent);
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenComponent__WaitForCompletion_d__15);
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18);
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenComponent__WaitForKill_d__17);
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19);
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenComponent__WaitForRewind_d__16);
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenComponent__WaitForStart_d__20);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenComponent/<WaitForCompletion>d__15
class CORDL_TYPE DOTweenComponent__WaitForCompletion_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field t, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18e5bf0, size 0x54, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::DG::Tweening::Core::DOTweenComponent__WaitForCompletion_d__15* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18e5c44, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18e5c4c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18e5c84, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18e5bec, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x18e56b8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenComponent__WaitForCompletion_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForCompletion_d__15", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenComponent__WaitForCompletion_d__15(DOTweenComponent__WaitForCompletion_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForCompletion_d__15", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenComponent__WaitForCompletion_d__15(DOTweenComponent__WaitForCompletion_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10836};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field t, offset: 0x20, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForCompletion_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForCompletion_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForCompletion_d__15, ___t) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenComponent__WaitForCompletion_d__15, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenComponent/<WaitForRewind>d__16
class CORDL_TYPE DOTweenComponent__WaitForRewind_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field t, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18e5c90, size 0x70, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::DG::Tweening::Core::DOTweenComponent__WaitForRewind_d__16* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18e5d00, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18e5d08, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18e5d40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18e5c8c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x18e5740, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenComponent__WaitForRewind_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForRewind_d__16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenComponent__WaitForRewind_d__16(DOTweenComponent__WaitForRewind_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForRewind_d__16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenComponent__WaitForRewind_d__16(DOTweenComponent__WaitForRewind_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10837};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field t, offset: 0x20, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForRewind_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForRewind_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForRewind_d__16, ___t) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenComponent__WaitForRewind_d__16, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenComponent/<WaitForKill>d__17
class CORDL_TYPE DOTweenComponent__WaitForKill_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field t, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18e5d4c, size 0x4c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::DG::Tweening::Core::DOTweenComponent__WaitForKill_d__17* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18e5d98, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18e5da0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18e5dd8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18e5d48, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x18e57c8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenComponent__WaitForKill_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForKill_d__17", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenComponent__WaitForKill_d__17(DOTweenComponent__WaitForKill_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForKill_d__17", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenComponent__WaitForKill_d__17(DOTweenComponent__WaitForKill_d__17 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10838};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field t, offset: 0x20, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForKill_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForKill_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForKill_d__17, ___t) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenComponent__WaitForKill_d__17, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenComponent/<WaitForElapsedLoops>d__18
class CORDL_TYPE DOTweenComponent__WaitForElapsedLoops_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field elapsedLoops, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsedLoops, put=__cordl_internal_set_elapsedLoops)) int32_t  elapsedLoops;

/// @brief Field t, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18e5de4, size 0x5c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18e5e40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18e5e48, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18e5e80, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18e5de0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get_elapsedLoops() const;

constexpr int32_t& __cordl_internal_get_elapsedLoops() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_elapsedLoops(int32_t  value) ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x18e5860, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenComponent__WaitForElapsedLoops_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForElapsedLoops_d__18", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenComponent__WaitForElapsedLoops_d__18(DOTweenComponent__WaitForElapsedLoops_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForElapsedLoops_d__18", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenComponent__WaitForElapsedLoops_d__18(DOTweenComponent__WaitForElapsedLoops_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10839};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field t, offset: 0x20, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

/// @brief Field elapsedLoops, offset: 0x28, size: 0x4, def value: None
 int32_t  ___elapsedLoops;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18, ___t) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18, ___elapsedLoops) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18, 0x30>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenComponent/<WaitForPosition>d__19
class CORDL_TYPE DOTweenComponent__WaitForPosition_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field position, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) float_t  position;

/// @brief Field t, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18e5e8c, size 0x6c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18e5ef8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18e5f00, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18e5f38, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18e5e88, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr float_t const& __cordl_internal_get_position() const;

constexpr float_t& __cordl_internal_get_position() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_position(float_t  value) ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x18e58f8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenComponent__WaitForPosition_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForPosition_d__19", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenComponent__WaitForPosition_d__19(DOTweenComponent__WaitForPosition_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForPosition_d__19", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenComponent__WaitForPosition_d__19(DOTweenComponent__WaitForPosition_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10840};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field t, offset: 0x20, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

/// @brief Field position, offset: 0x28, size: 0x4, def value: None
 float_t  ___position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19, ___t) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19, ___position) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19, 0x30>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenComponent/<WaitForStart>d__20
class CORDL_TYPE DOTweenComponent__WaitForStart_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field t, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::DG::Tweening::Tween*  t;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18e5f44, size 0x54, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::DG::Tweening::Core::DOTweenComponent__WaitForStart_d__20* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18e5f98, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18e5fa0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18e5fd8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18e5f40, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_t() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_t(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x18e5980, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenComponent__WaitForStart_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForStart_d__20", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenComponent__WaitForStart_d__20(DOTweenComponent__WaitForStart_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent__WaitForStart_d__20", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenComponent__WaitForStart_d__20(DOTweenComponent__WaitForStart_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10841};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field t, offset: 0x20, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___t;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForStart_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForStart_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent__WaitForStart_d__20, ___t) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenComponent__WaitForStart_d__20, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies DG.Tweening.IDOTweenInit, UnityEngine.MonoBehaviour
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenComponent
class CORDL_TYPE DOTweenComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _WaitForCompletion_d__15 = ::DG::Tweening::Core::DOTweenComponent__WaitForCompletion_d__15;

using _WaitForElapsedLoops_d__18 = ::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18;

using _WaitForKill_d__17 = ::DG::Tweening::Core::DOTweenComponent__WaitForKill_d__17;

using _WaitForPosition_d__19 = ::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19;

using _WaitForRewind_d__16 = ::DG::Tweening::Core::DOTweenComponent__WaitForRewind_d__16;

using _WaitForStart_d__20 = ::DG::Tweening::Core::DOTweenComponent__WaitForStart_d__20;

/// @brief Field _duplicateToDestroy, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__duplicateToDestroy, put=__cordl_internal_set__duplicateToDestroy)) bool  _duplicateToDestroy;

/// @brief Field _paused, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__paused, put=__cordl_internal_set__paused)) bool  _paused;

/// @brief Field _pausedTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__pausedTime, put=__cordl_internal_set__pausedTime)) float_t  _pausedTime;

/// @brief Field _unscaledDeltaTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__unscaledDeltaTime, put=__cordl_internal_set__unscaledDeltaTime)) float_t  _unscaledDeltaTime;

/// @brief Field _unscaledTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__unscaledTime, put=__cordl_internal_set__unscaledTime)) float_t  _unscaledTime;

/// @brief Field inspectorUpdater, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_inspectorUpdater, put=__cordl_internal_set_inspectorUpdater)) int32_t  inspectorUpdater;

/// @brief Convert operator to "::DG::Tweening::IDOTweenInit"
constexpr operator  ::DG::Tweening::IDOTweenInit*() noexcept;

/// @brief Method Awake, addr 0x18e42c8, size 0x20c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Create, addr 0x18e59a8, size 0x13c, virtual false, abstract: false, final false
static inline void Create() ;

/// @brief Method DestroyInstance, addr 0x18e5ae4, size 0x100, virtual false, abstract: false, final false
static inline void DestroyInstance() ;

/// @brief Method FixedUpdate, addr 0x18e4d88, size 0x170, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0x18e4c7c, size 0x10c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::DG::Tweening::Core::DOTweenComponent* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x18e54ac, size 0x5c, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pauseStatus) ;

/// @brief Method OnDestroy, addr 0x18e5038, size 0x464, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmos, addr 0x18e4ef8, size 0x140, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method SetCapacity, addr 0x18e5508, size 0x70, virtual true, abstract: false, final true
inline ::DG::Tweening::IDOTweenInit* SetCapacity(int32_t  tweenersCapacity, int32_t  sequencesCapacity) ;

/// @brief Method Start, addr 0x18e44d4, size 0xd8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x18e45ac, size 0x2e0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WaitForCompletion, addr 0x18e5658, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForCompletion(::DG::Tweening::Tween*  t) ;

/// @brief Method WaitForElapsedLoops, addr 0x18e57f0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForElapsedLoops(::DG::Tweening::Tween*  t, int32_t  elapsedLoops) ;

/// @brief Method WaitForKill, addr 0x18e5768, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForKill(::DG::Tweening::Tween*  t) ;

/// @brief Method WaitForPosition, addr 0x18e5888, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForPosition(::DG::Tweening::Tween*  t, float_t  position) ;

/// @brief Method WaitForRewind, addr 0x18e56e0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForRewind(::DG::Tweening::Tween*  t) ;

/// @brief Method WaitForStart, addr 0x18e5920, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForStart(::DG::Tweening::Tween*  t) ;

constexpr bool const& __cordl_internal_get__duplicateToDestroy() const;

constexpr bool& __cordl_internal_get__duplicateToDestroy() ;

constexpr bool const& __cordl_internal_get__paused() const;

constexpr bool& __cordl_internal_get__paused() ;

constexpr float_t const& __cordl_internal_get__pausedTime() const;

constexpr float_t& __cordl_internal_get__pausedTime() ;

constexpr float_t const& __cordl_internal_get__unscaledDeltaTime() const;

constexpr float_t& __cordl_internal_get__unscaledDeltaTime() ;

constexpr float_t const& __cordl_internal_get__unscaledTime() const;

constexpr float_t& __cordl_internal_get__unscaledTime() ;

constexpr int32_t const& __cordl_internal_get_inspectorUpdater() const;

constexpr int32_t& __cordl_internal_get_inspectorUpdater() ;

constexpr void __cordl_internal_set__duplicateToDestroy(bool  value) ;

constexpr void __cordl_internal_set__paused(bool  value) ;

constexpr void __cordl_internal_set__pausedTime(float_t  value) ;

constexpr void __cordl_internal_set__unscaledDeltaTime(float_t  value) ;

constexpr void __cordl_internal_set__unscaledTime(float_t  value) ;

constexpr void __cordl_internal_set_inspectorUpdater(int32_t  value) ;

/// @brief Method .ctor, addr 0x18e5be4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DG::Tweening::IDOTweenInit"
constexpr ::DG::Tweening::IDOTweenInit* i___DG__Tweening__IDOTweenInit() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenComponent(DOTweenComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenComponent(DOTweenComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10842};

/// @brief Field inspectorUpdater, offset: 0x20, size: 0x4, def value: None
 int32_t  ___inspectorUpdater;

/// @brief Field _unscaledTime, offset: 0x24, size: 0x4, def value: None
 float_t  ____unscaledTime;

/// @brief Field _unscaledDeltaTime, offset: 0x28, size: 0x4, def value: None
 float_t  ____unscaledDeltaTime;

/// @brief Field _paused, offset: 0x2c, size: 0x1, def value: None
 bool  ____paused;

/// @brief Field _pausedTime, offset: 0x30, size: 0x4, def value: None
 float_t  ____pausedTime;

/// @brief Field _duplicateToDestroy, offset: 0x34, size: 0x1, def value: None
 bool  ____duplicateToDestroy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent, ___inspectorUpdater) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent, ____unscaledTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent, ____unscaledDeltaTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent, ____paused) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent, ____pausedTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenComponent, ____duplicateToDestroy) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenComponent, 0x38>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
NEED_NO_BOX(::DG::Tweening::Core::DOTweenComponent);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenComponent*, "DG.Tweening.Core", "DOTweenComponent");
NEED_NO_BOX(::DG::Tweening::Core::DOTweenComponent__WaitForCompletion_d__15);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenComponent__WaitForCompletion_d__15*, "DG.Tweening.Core", "DOTweenComponent/<WaitForCompletion>d__15");
NEED_NO_BOX(::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenComponent__WaitForElapsedLoops_d__18*, "DG.Tweening.Core", "DOTweenComponent/<WaitForElapsedLoops>d__18");
NEED_NO_BOX(::DG::Tweening::Core::DOTweenComponent__WaitForKill_d__17);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenComponent__WaitForKill_d__17*, "DG.Tweening.Core", "DOTweenComponent/<WaitForKill>d__17");
NEED_NO_BOX(::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenComponent__WaitForPosition_d__19*, "DG.Tweening.Core", "DOTweenComponent/<WaitForPosition>d__19");
NEED_NO_BOX(::DG::Tweening::Core::DOTweenComponent__WaitForRewind_d__16);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenComponent__WaitForRewind_d__16*, "DG.Tweening.Core", "DOTweenComponent/<WaitForRewind>d__16");
NEED_NO_BOX(::DG::Tweening::Core::DOTweenComponent__WaitForStart_d__20);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenComponent__WaitForStart_d__20*, "DG.Tweening.Core", "DOTweenComponent/<WaitForStart>d__20");
