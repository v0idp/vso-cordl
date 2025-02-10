#pragma once
// IWYU pragma private; include "VROSC/SignalGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Node_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SignalGenerator)
namespace VROSC {
struct SignalGenerator_Type;
}
namespace VROSC {
class SignalNode;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
struct SignalGenerator_Type;
}
namespace VROSC {
class SignalGenerator;
}
// Write type traits
MARK_VAL_T(::VROSC::SignalGenerator_Type);
MARK_REF_PTR_T(::VROSC::SignalGenerator);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SignalGenerator/Type
struct CORDL_TYPE SignalGenerator_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SignalGenerator_Type_Unwrapped
enum struct __SignalGenerator_Type_Unwrapped : int32_t {
__E_Constant = static_cast<int32_t>(0x0),
__E_Beat = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SignalGenerator_Type_Unwrapped () const noexcept {
return static_cast<__SignalGenerator_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SignalGenerator_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SignalGenerator_Type(int32_t  value__) noexcept;

/// @brief Field Beat value: I32(1)
static ::VROSC::SignalGenerator_Type const Beat;

/// @brief Field Constant value: I32(0)
static ::VROSC::SignalGenerator_Type const Constant;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1013};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SignalGenerator_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SignalGenerator_Type, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.Node, VROSC.SignalGenerator::Type
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SignalGenerator
class CORDL_TYPE SignalGenerator : public ::VROSC::Node {
public:
// Declarations
using Type = ::VROSC::SignalGenerator_Type;

/// @brief Field _bypass, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _output, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  _output;

/// @brief Field _signal, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__signal, put=__cordl_internal_set__signal)) ::VROSC::Signal*  _signal;

/// @brief Field _type, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::VROSC::SignalGenerator_Type  _type;

static inline ::VROSC::SignalGenerator* New_ctor() ;

/// @brief Method Update, addr 0x1725a98, size 0x148, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& __cordl_internal_get__output() const;

constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& __cordl_internal_get__output() ;

constexpr ::VROSC::Signal* const& __cordl_internal_get__signal() const;

constexpr ::VROSC::Signal*& __cordl_internal_get__signal() ;

constexpr ::VROSC::SignalGenerator_Type const& __cordl_internal_get__type() const;

constexpr ::VROSC::SignalGenerator_Type& __cordl_internal_get__type() ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__output(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value) ;

constexpr void __cordl_internal_set__signal(::VROSC::Signal*  value) ;

constexpr void __cordl_internal_set__type(::VROSC::SignalGenerator_Type  value) ;

/// @brief Method .ctor, addr 0x1725be0, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignalGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignalGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalGenerator(SignalGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalGenerator(SignalGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1014};

/// @brief Field _bypass, offset: 0x20, size: 0x1, def value: None
 bool  ____bypass;

/// @brief Field _output, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  ____output;

/// @brief Field _signal, offset: 0x30, size: 0x8, def value: None
 ::VROSC::Signal*  ____signal;

/// @brief Field _type, offset: 0x38, size: 0x4, def value: None
 ::VROSC::SignalGenerator_Type  ____type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SignalGenerator, ____bypass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalGenerator, ____output) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalGenerator, ____signal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SignalGenerator, ____type) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SignalGenerator, 0x40>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalGenerator_Type, "VROSC", "SignalGenerator/Type");
NEED_NO_BOX(::VROSC::SignalGenerator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalGenerator*, "VROSC", "SignalGenerator");
