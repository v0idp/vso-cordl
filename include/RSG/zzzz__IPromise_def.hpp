#pragma once
// IWYU pragma private; include "RSG/IPromise.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IPromise)
namespace RSG {
template<typename PromisedT>
class IPromise_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace RSG {
class IPromise;
}
// Write type traits
MARK_REF_PTR_T(::RSG::IPromise);
// Dependencies 
namespace RSG {
// Is value type: false
// CS Name: RSG.IPromise
class CORDL_TYPE IPromise {
public:
// Declarations
 __declspec(property(get=get_Id)) int32_t  Id;

/// @brief Method Catch, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* Catch(::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method ContinueWith, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* ContinueWith(::System::Func_1<::RSG::IPromise*>*  onResolved) ;

/// @brief Method ContinueWith, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* ContinueWith(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onComplete) ;

/// @brief Method Done, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Done() ;

/// @brief Method Done, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Done(::System::Action*  onResolved) ;

/// @brief Method Done, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Done(::System::Action*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Finally, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* Finally(::System::Action*  onComplete) ;

/// @brief Method Progress, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* Progress(::System::Action_1<float_t>*  onProgress) ;

/// @brief Method Then, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* Then(::System::Action*  onResolved) ;

/// @brief Method Then, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* Then(::System::Action*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Then, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* Then(::System::Action*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method Then, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* Then(::System::Func_1<::RSG::IPromise*>*  onResolved) ;

/// @brief Method Then, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* Then(::System::Func_1<::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected) ;

/// @brief Method Then, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* Then(::System::Func_1<::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method Then, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved) ;

/// @brief Method Then, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected) ;

/// @brief Method Then, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* Then(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method ThenAll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain) ;

/// @brief Method ThenAll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename ConvertedT>
inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>* ThenAll(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain) ;

/// @brief Method ThenRace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain) ;

/// @brief Method ThenRace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* ThenRace(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain) ;

/// @brief Method ThenSequence, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* ThenSequence(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RSG::IPromise*>*>*>*  chain) ;

/// @brief Method WithName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::RSG::IPromise* WithName(::StringW  name) ;

/// @brief Method get_Id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Id() ;

// Ctor Parameters [CppParam { name: "", ty: "IPromise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPromise(IPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1695};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
NEED_NO_BOX(::RSG::IPromise);
DEFINE_IL2CPP_ARG_TYPE(::RSG::IPromise*, "RSG", "IPromise");
