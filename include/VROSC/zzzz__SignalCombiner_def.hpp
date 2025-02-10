#pragma once
// IWYU pragma private; include "VROSC/SignalCombiner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalCombiner)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class SignalCombiner;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SignalCombiner);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SignalCombiner
class CORDL_TYPE SignalCombiner : public ::VROSC::SignalNode {
public:
// Declarations
 __declspec(property(get=get_MaxInputs)) int32_t  MaxInputs;

/// @brief Field _signals, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__signals, put=__cordl_internal_set__signals)) ::System::Collections::Generic::List_1<::VROSC::Signal*>*  _signals;

/// @brief Method AddSignal, addr 0x1725978, size 0xa4, virtual false, abstract: false, final false
inline void AddSignal(::VROSC::Signal*  signal) ;

/// @brief Method GetCombinedSignal, addr 0x1725670, size 0x1bc, virtual false, abstract: false, final false
inline ::VROSC::Signal* GetCombinedSignal(::System::Collections::Generic::List_1<::VROSC::Signal*>*  signals) ;

/// @brief Method LateUpdate, addr 0x1725584, size 0xec, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::SignalCombiner* New_ctor() ;

/// @brief Method OnDisable, addr 0x172582c, size 0x98, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ReceiveSignal, addr 0x17258c4, size 0xb4, virtual true, abstract: false, final false
inline void ReceiveSignal(::VROSC::Signal*  signal) ;

constexpr ::System::Collections::Generic::List_1<::VROSC::Signal*>* const& __cordl_internal_get__signals() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::Signal*>*& __cordl_internal_get__signals() ;

constexpr void __cordl_internal_set__signals(::System::Collections::Generic::List_1<::VROSC::Signal*>*  value) ;

/// @brief Method .ctor, addr 0x1725a1c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxInputs, addr 0x172557c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_MaxInputs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignalCombiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignalCombiner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalCombiner(SignalCombiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalCombiner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalCombiner(SignalCombiner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1012};

/// @brief Field _signals, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::Signal*>*  ____signals;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SignalCombiner, ____signals) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SignalCombiner, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SignalCombiner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalCombiner*, "VROSC", "SignalCombiner");
