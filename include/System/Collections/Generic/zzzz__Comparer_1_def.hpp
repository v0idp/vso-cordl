#pragma once
// IWYU pragma private; include "System/Collections/Generic/Comparer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Comparer_1)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class Comparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::Comparer_1);
// Dependencies System.Collections.Generic.IComparer`1<T>, System.Collections.IComparer, System.Object
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Collections.Generic.Comparer`1<T>
class CORDL_TYPE Comparer_1 : public ::System::Object {
public:
// Declarations
/// @brief Field defaultComparer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultComparer, put=setStaticF_defaultComparer)) ::System::Collections::Generic::Comparer_1<T>*  defaultComparer;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
constexpr operator  ::System::Collections::Generic::IComparer_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IComparer"
constexpr operator  ::System::Collections::IComparer*() noexcept;

/// @brief Method Compare, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Compare(T  x, T  y) ;

/// @brief Method CreateComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Comparer_1<T>* CreateComparer() ;

static inline ::System::Collections::Generic::Comparer_1<T>* New_ctor() ;

/// @brief Method System.Collections.IComparer.Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t System_Collections_IComparer_Compare(::System::Object*  x, ::System::Object*  y) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Comparer_1<T>* getStaticF_defaultComparer() ;

/// @brief Method get_Default, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Comparer_1<T>* get_Default() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
constexpr ::System::Collections::Generic::IComparer_1<T>* i___System__Collections__Generic__IComparer_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

static inline void setStaticF_defaultComparer(::System::Collections::Generic::Comparer_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Comparer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Comparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Comparer_1(Comparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Comparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Comparer_1(Comparer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3520};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Comparer_1, "System.Collections.Generic", "Comparer`1");
